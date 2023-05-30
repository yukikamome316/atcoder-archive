/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/41844104
 * Submitted at: 2023-05-30 11:42:05
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_c
 * Result: AC
 * Execution Time: 43 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N, K; cin >> N >> K;
    vector<ll> a(N); rep(i, N) cin >> a[i];

    vector<ll> s(N + 1, 0);
    rep(i, N) s[i + 1] = s[i] + a[i];
    
    ll result = 0;
    rep(i, N - K + 1) {
        result += s[i + K] - s[i];
    }
    cout << result << endl;

}