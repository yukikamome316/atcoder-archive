/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33482277
 * Submitted at: 2022-07-24 02:07:32
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_d
 * Result: WA
 * Execution Time: 175 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, m; cin >> n >> m;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    vector<int> bonus(n + 1);
    rep(i, m) {
        int c; cin >> c;
        cin >> bonus[c];
    }
    
    vector dp(n + 1, vector<ll>(n + 1, -1));
    dp[0][0] = 0;
    rep2(i, 1, n + 1) {
        rep(j, n + 1) {
            if (j == 0) {
                rep(k, n + 1) chmax(dp[i][j], dp[i - 1][k]);
            } else {
                dp[i][j] = dp[i - 1][j - 1] + x[i - 1] + bonus[j];
            }
        }
    }
    cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
}