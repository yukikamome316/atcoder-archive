/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36067913
 * Submitted at: 2022-10-29 22:23:32
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

ll f(ll n, map<ll, ll> &dp) {
    if (dp[n] != 0) {
        return dp[n];
    }
    return dp[n] = f(floor(n / 2), dp) + f(floor(n / 3), dp);
}

int main() {
    ll N; cin >> N;
    map<ll, ll> dp;
    dp[0ll] = 1;
    cout << f(N, dp) << endl;
}