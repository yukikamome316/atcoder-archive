/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc006/submissions/58399202
 * Submitted at: 2024-10-04 19:48:44
 * Problem URL: https://atcoder.jp/contests/abc006/tasks/abc006_2
 * Result: AC
 * Execution Time: 6 ms
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
  vector<int> dp(n + 1);
  dp[1] = 0;
  dp[2] = 0;
  dp[3] = 1;
  
  rep2(i, 4, n + 1) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 10007;
  }

  cout << dp[n] << endl;
}
