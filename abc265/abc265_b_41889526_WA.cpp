/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/41889526
 * Submitted at: 2023-06-01 18:53:16
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_b
 * Result: WA
 * Execution Time: 84 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, M;
    ll T;
    cin >> N >> M >> T;
    vector<int> A(N - 1);
    rep(i, N - 1) cin >> A[i];
    vector<int> bonus(N);
    
    rep(i, M) {
        int X, Y;
        cin >> X >> Y;
        bonus[X - 1] = Y;
    }

    bool ok = true;
    rep(i, N - 1) {
        T += bonus[i];

        if (T - A[i] < 0) {
            ok = false;
            break;
        }

        T -= A[i];
    }

    cout << (ok ? "Yes" : "No") << endl;

}