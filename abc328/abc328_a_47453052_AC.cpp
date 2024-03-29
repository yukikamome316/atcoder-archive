/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc328/submissions/47453052
 * Submitted at: 2023-11-11 21:01:12
 * Problem URL: https://atcoder.jp/contests/abc328/tasks/abc328_a
 * Result: AC
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, X;
  cin >> N >> X;
  ll ans = 0;
  rep(i, N) {
    int a;
    cin >> a;
    if (a <= X) ans += a;
  }

  cout << ans << endl;
}
