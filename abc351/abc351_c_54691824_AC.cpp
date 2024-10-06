/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc351/submissions/54691824
 * Submitted at: 2024-06-18 19:21:18
 * Problem URL: https://atcoder.jp/contests/abc351/tasks/abc351_c
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n;
  cin >> n;
  stack<int> a;

  rep(i, n) {
    int tmp;
    cin >> tmp;
    a.push(tmp);

    while (a.size() >= 2) {
      int x = a.top();
      a.pop();
      int y = a.top();
      a.pop();
      if (x == y) {
        a.push(x + 1);
      } else {
        a.push(y);
        a.push(x);
        break;
      }
    }
  }

  cout << a.size() << endl;
}
