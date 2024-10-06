/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/58493861
 * Submitted at: 2024-10-06 00:53:27
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_d
 * Result: AC
 * Execution Time: 26 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  rep(i, n) { cin >> t[i]; }

  // dp[i][j]: i個目までのレシピまで見て和をjにできるか？
  vector dp(n + 1, vector<int>(100001, 0));

  dp[0][0] = 1;

  rep(i, n) {
    rep(j, 100001) {
      dp[i + 1][j] |= dp[i][j];
      if (j - t[i] >= 0) {
        dp[i + 1][j] |= dp[i][j - t[i]];
      }
    }
  }

  int sum = accumulate(t.begin(), t.end(), 0);

  int min_val = 1e9;
  rep2(i, (sum + 2 - 1) / 2, sum + 1) {
    if (dp[n][i] && i < min_val) {
      min_val = i;
    }
  }

  cout << min_val << endl;
}
