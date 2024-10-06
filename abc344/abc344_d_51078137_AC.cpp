/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc344/submissions/51078137
 * Submitted at: 2024-03-09 22:08:26
 * Problem URL: https://atcoder.jp/contests/abc344/tasks/abc344_d
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
  string T;
  cin >> T;
  int N;
  cin >> N;
  vector<vector<string>> S(N, vector<string>());

  rep(i, N) {
    int A;
    cin >> A;
    S[i].resize(A);
    rep(j, A) {
      cin >> S[i][j];
    }
  }

  vector<vector<int>> dp(N + 1, vector<int>(T.size() + 1, INT_MAX));
  dp[0][0] = 0;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= T.size(); j++) {
      if (dp[i - 1][j] != INT_MAX) {
        // Do nothing
        chmin(dp[i][j], dp[i - 1][j]);
        
        // Select a string from bag i
        for (int k = 0; k < S[i - 1].size(); k++) {
          int len = S[i - 1][k].size();
          if (j + len <= T.size() && T.substr(j, len) == S[i - 1][k]) {
            chmin(dp[i][j + len], dp[i - 1][j] + 1);
          }
        }
      }
    }
  }

  int ans = dp[N][T.size()];
  cout << (ans == INT_MAX ? -1 : ans) << endl;
}
