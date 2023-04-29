/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41043560
 * Submitted at: 2023-04-29 22:04:14
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: WA
 * Execution Time: 7 ms
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

    vector<int> A_count(H);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (A[i][j] == '#') cnt++;
        }
        A_count[i] = cnt;
    }

    vector<int> B_count(H);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (B[i][j] == '#') cnt++;
        }
        B_count[i] = cnt;
    }
    
    for (int i = 0; i < H + 5; i++) {
        if (A_count == B_count) {
            cout << "Yes" << endl;
            return 0;
        }

        iter_swap(B_count.begin(), B_count.begin() + H - 1);
        for (int j = 0; j < H - 2; j++) {
            iter_swap(B_count.rbegin() + j,
                B_count.rbegin() + j + 1);
        }
    }

    cout << "No" << endl;

}