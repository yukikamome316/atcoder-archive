/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41051930
 * Submitted at: 2023-04-29 22:40:23
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: WA
 * Execution Time: 8 ms
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

    vector<int> A_count_h(H), A_count_w(W);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (A[i][j] == '#') cnt++;
        }
        A_count_h[i] = cnt;
    }

    rep(i, W) {
        int cnt = 0;
        rep(j, H) {
            if (A[j][i] == '#') cnt++;
        }
        A_count_w[i] = cnt;
    }

    vector<int> B_count_h(H), B_count_w(W);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (B[i][j] == '#') cnt++;
        }
        B_count_h[i] = cnt;
    }

    rep(i, W) {
        int cnt = 0;
        rep(j, H) {
            if (B[j][i] == '#') cnt++;
        }
        B_count_w[i] = cnt;
    }

    bool result = false;

    for (int i = 0; i < H; i++) {
        if (A_count_h == B_count_h) {
            result = true;
            break;
        }

        iter_swap(B_count_h.begin(), B_count_h.begin() + H - 1);
        for (int j = 0; j < H - 2; j++) {
            iter_swap(B_count_h.rbegin() + j,
                B_count_h.rbegin() + j + 1);
        }
    }

    if (result) {
        for (int i = 0; i < W; i++) {
            if (A_count_w == B_count_w) {
                cout << "Yes" << endl;
                return 0;
            }

            iter_swap(B_count_w.begin(), B_count_w.begin() + W - 1);
            for (int j = 0; j < W - 2; j++) {
                iter_swap(B_count_w.rbegin() + j,
                    B_count_w.rbegin() + j + 1);
            }
        }

    }

    cout << "No" << endl;

}