/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc285/submissions/54690743
 * Submitted at: 2024-06-18 18:32:26
 * Problem URL: https://atcoder.jp/contests/abc285/tasks/abc285_b
 * Result: AC
 * Execution Time: 13 ms
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
    for (int k = 0; k < n - i; k++) {
      if (s[k] != s[k + i]) {
        ans++;
      } else {
        break;
      }
    }
    cout << ans << endl;
  }
}
