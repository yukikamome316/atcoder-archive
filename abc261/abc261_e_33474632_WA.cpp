/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33474632
 * Submitted at: 2022-07-23 22:38:46
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_e
 * Result: WA
 * Execution Time: 380 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int N;
    ll C;
    cin >> N >> C;
    vector<ll> dp(N);
    dp[0] = C;
    rep2(i, 1, N + 1) {
        int T, A; cin >> T >> A;
        if (T == 1) {
            dp[i] = dp[i - 1] &= A;
        } else if (T == 2) {
            dp[i] = dp[i - 1] |= A;
        } else {
            dp[i] = dp[i - 1] ^= A;
        }
        cout << dp[i] << endl;
    }
}