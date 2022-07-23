/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33444017
 * Submitted at: 2022-07-23 21:13:51
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int L_1, R_1, L_2, R_2;
    cin >> L_1 >> R_1 >> L_2 >> R_2;
    if (R_1 <= L_2 || R_2 <= L_1) cout << 0 << endl;
    else if (L_2 <= R_1) {
        cout << R_1 - L_2 << endl;
    } else if (L_1 <= R_2) {
        cout << R_2 - L_1 << endl;
    } else if (L_2 <= R_2) {
        cout << R_2 - L_2 << endl;
    } else if (L_1 <= R_1) {
        cout << R_1 - L_1 << endl;
    } else {
        cout << 0 << endl;
    }
}