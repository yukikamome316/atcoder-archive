/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33090061
 * Submitted at: 2022-07-09 21:28:33
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;
    if (X <= M) {
        cout << T << endl;
    } else {
        cout << T - D * (X - M) << endl;
    }
}