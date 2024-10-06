/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc344/submissions/51062441
 * Submitted at: 2024-03-09 21:40:23
 * Problem URL: https://atcoder.jp/contests/abc344/tasks/abc344_e
 * Result: TLE
 * Execution Time: 2208 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

struct Node {
  int value;
  Node* next;
};

int main() {
  int N;
  cin >> N;

  Node* head = nullptr;
  Node* prev = nullptr;
  rep(i, N) {
    int A;
    cin >> A;

    Node* newNode = new Node();
    newNode->value = A;
    newNode->next = nullptr;

    if (i == 0) head = newNode;

    if (prev != nullptr) {
      prev->next = newNode;
    }
    prev = newNode;

    if (i == N - 1) newNode->next = nullptr;
  }

  int Q;
  cin >> Q;

  rep(_, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;

      Node* curr = head;
      while (curr != nullptr) {
        if (curr->value == x) {
          Node* newNode = new Node();
          newNode->value = y;
          newNode->next = curr->next;
          curr->next = newNode;
          break;
        }
        curr = curr->next;
      }
    } else if (t == 2) {
      int x;
      cin >> x;

      if (head != nullptr && head->value == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
      } else {
        Node* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
          if (curr->next->value == x) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            break;
          }
          curr = curr->next;
        }
      }
    }
  }

  Node* curr = head;
  while (curr != nullptr) {
    cout << curr->value << " ";
    curr = curr->next;
  }

  // Clean up memory
  curr = head;
  while (curr != nullptr) {
    Node* temp = curr;
    curr = curr->next;
    delete temp;
  }
}
void insertAfter(Node* head, int x, int y) {
  Node* curr = head;
  while (curr != nullptr) {
    if (curr->value == x) {
      Node* newNode = new Node();
      newNode->value = y;
      newNode->next = curr->next;
      curr->next = newNode;
      break;
    }
    curr = curr->next;
  }
}

void removeNode(Node*& head, int x) {
  if (head != nullptr && head->value == x) {
    Node* temp = head;
    head = head->next;
    delete temp;
  } else {
    Node* curr = head;
    while (curr != nullptr && curr->next != nullptr) {
      if (curr->next->value == x) {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        break;
      }
      curr = curr->next;
    }
  }
}
