/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc344/submissions/51058901
 * Submitted at: 2024-03-09 21:34:46
 * Problem URL: https://atcoder.jp/contests/abc344/tasks/abc344_e
 * Result: TLE
 * Execution Time: 2456 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  map<int, int> next;
  cin >> N;

  int head = -1;
  int prev = -1;
  rep(i, N) {
    int A;
    cin >> A;

    if (i == 0) head = A;

    if (prev == -1) {
      prev = A;
      continue;
    }
    next[prev] = A;
    prev = A;

    if (i == N - 1) next[A] = -1;
  }

  int Q;
  cin >> Q;

  rep(_, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x, y;
      cin >> x >> y;

      int next_old = next[x];
      next[x] = y;
      next[y] = next_old;
    } else if (t == 2) {
      int x;
      cin >> x;

      if (head == x) {
        head = next[x];
      } else {
        int prev_x = -1;
        for (auto it = next.begin(); it != next.end(); ++it) {
          if (it->second == x) {
            prev_x = it->first;
            break;
          }
        }
        next[prev_x] = next[x];
      } 
    }
  }

  for (int i = head; i != -1; i = next[i]) {
    cout << i << " ";
  }
}
