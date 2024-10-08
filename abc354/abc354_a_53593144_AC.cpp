/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53593144
 * Submitted at: 2024-05-18 21:09:29
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_a
 * Result: AC
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll H;
  cin >> H;
  int height = 0;
  rep(i, 31) {
    height += (1 << i);
    if (height > H) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
