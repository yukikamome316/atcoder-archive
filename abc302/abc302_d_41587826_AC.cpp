/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41587826
 * Submitted at: 2023-05-21 01:12:39
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_d
 * Result: AC
 * Execution Time: 217 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    ll D; cin >> D;
    vector<ll> A(N), B(M);
    rep(i, N) cin >> A[i];
    rep(i, M) cin >> B[i];

    sort(A.begin(), A.end());

    ll ans = -1;
    rep(i, M) {
        auto right = upper_bound(A.begin(), A.end(), B[i] + D);
        int idx = right - A.begin() - 1;
        if (idx >= 0 && A[idx] >= B[i] - D)
            ans = max(ans, A[idx] + B[i]);
    }

    cout << ans << endl;
    
}