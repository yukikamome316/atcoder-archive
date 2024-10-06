/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc339/submissions/54691936
 * Submitted at: 2024-06-18 19:25:57
 * Problem URL: https://atcoder.jp/contests/abc339/tasks/abc339_c
 * Result: AC
 * Execution Time: 57 ms
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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  
  ll ans = 0;
  rep(i, n) {
    ans = max(ans + a[i], 0ll);
  }

  cout << ans << endl;
}
