/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc190/submissions/33184920
 * Submitted at: 2022-07-12 19:18:38
 * Problem URL: https://atcoder.jp/contests/abc190/tasks/abc190_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, S, D;
    cin >> N >> S >> D;
    /*
     * N: 呪文の種類
     * S: 詠唱の時間制限
     * D: 最低ダメージ
     */
    bool result = false;
    rep(i, N) {
        int X, Y; // X: 秒数, Y: 威力
        cin >> X >> Y;
        if (X < S && Y > D) {
            result = true;
        }
    }
    cout << (result ? "Yes" : "No") << endl;
}