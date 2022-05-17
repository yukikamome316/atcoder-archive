/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/31763923
 * Submitted at: 2022-05-17 19:35:08
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    if (A == B) {
        cout << 0 << endl;
    } else if ((A + B) % 2 != 0) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << (A + B) / 2 << endl;
    }
}