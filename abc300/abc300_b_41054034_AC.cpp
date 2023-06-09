/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41054034
 * Submitted at: 2023-04-29 23:04:22
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;

    vector<string> A(H);
    vector<string> B(H);

    rep(i, H) cin >> A[i];
    rep(i, H) cin >> B[i];

    rep(s, H) {
        rep(t, W) {
            bool result = true;
            rep(i, H) {
                rep(j, W) {
                    if (A[i][j] 
                        != B[(i + s) % H][(j + t) % W])
                        result = false;
                }
            }
            
            if (result) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

}