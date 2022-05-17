/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc083/submissions/31763303
 * Submitted at: 2022-05-17 18:53:22
 * Problem URL: https://atcoder.jp/contests/abc083/tasks/abc083_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int L = A + B;
    int R = C + D;

    if (L == R) {
        cout << "Balanced" << endl;
    } else {
        cout << ((L > R) ? "Left" : "Right") << endl;
    }

    return 0;
}