/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33431177
 * Submitted at: 2022-07-23 21:03:09
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_a
 * Result: WA
 * Execution Time: 6 ms
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
    cout << (R_1 - L_2 > 0 ? R_1 - L_2 : 0) << endl;
}