/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/54690691
 * Submitted at: 2024-06-18 18:31:06
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_b
 * Result: TLE
 * Execution Time: 2207 ms
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
  string s;
  cin >> n >> s;

  rep2(i, 1, n) {
    int ans = 0;
    for (int l = 0; l + i <= n; l++) {
      bool ok = true;
      for (int k = 0; k < l; k++) {
        if (s[k] == s[k + i]) ok = false;
      }
      if (ok) chmax(ans, l);
    }
    cout << ans << endl;
  }
}
