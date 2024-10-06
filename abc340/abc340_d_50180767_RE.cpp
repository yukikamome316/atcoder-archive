/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc340/submissions/50180767
 * Submitted at: 2024-02-10 22:38:33
 * Problem URL: https://atcoder.jp/contests/abc340/tasks/abc340_d
 * Result: RE
 * Execution Time: 2218 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  vector<int> A(N - 1), B(N - 1), X(N - 1);
  rep(i, N - 1) cin >> A[i] >> B[i] >> X[i];
  rep(i, N - 1) X[i]--;

  vector G(N + 1, vector<int>());
  rep(i, N - 1) {
    G[X[i]].push_back(i);
  }
  vector<ll> dp(10e6 + 1, 1e18);
  dp[0] = 0;

  auto update = [&](auto self, int x) -> void {
    for (int e : G[x]) {
      if (dp[e] == 1e18) {
        self(self, e);
        chmin(dp[x], dp[x - 1] + A[x - 1]);
      } else {
        chmin(dp[x], dp[e] + B[e]);
      }
    }
  };

  rep(i, N) update(update, i);

  cout << dp[N - 1] << endl;
}
