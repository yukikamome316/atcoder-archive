/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/43775726
 * Submitted at: 2023-07-20 18:44:24
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  int ans = 0;
  while (Y * Z > ans * X) ans++;
  cout << ans - 1 << endl;
}