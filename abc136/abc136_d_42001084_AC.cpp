/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/42001084
 * Submitted at: 2023-06-04 21:06:54
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_d
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

void checker(string S, const int N) {
  vector<int> cnt(N, 1);

    vector<int> results(N, 1);
    rep(i, 10) {
      rep(j, N) {
        results[j] -= cnt[j];
        if (S[j] == 'R') {
          results[j + 1] += cnt[j];
        } else {
          results[j - 1] += cnt[j];
        }
      }
      cout << i << ": "; 
      rep(j, N)
        cout << results[j] << " ";
      cout << endl;
      cnt = results;
    }
}

int main() {
  string S;
  cin >> S;
  const int N = S.size();

  int log2_K = 32;

  vector dp(N, vector<int>(log2_K + 1));
  rep(i, N) {
    if (S[i] == 'R') dp[i][0] = i + 1;
    if (S[i] == 'L') dp[i][0] = i - 1;
  }

  for (int i = 0; i < log2_K; i++) {
    for (int j = 0; j < N; j++) {
      dp[j][i + 1] = dp[dp[j][i]][i];
    }
  }

  // checker(S, N);

  vector<int> ans(N);
  rep(i, N)
    ans[dp[i][32]]++;

  rep(i, N - 1)
    cout << ans[i] << " ";
  cout << ans[N - 1] << endl;
}