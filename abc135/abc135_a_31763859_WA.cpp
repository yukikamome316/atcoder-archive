/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc135/submissions/31763859
 * Submitted at: 2022-05-17 19:30:39
 * Problem URL: https://atcoder.jp/contests/abc135/tasks/abc135_a
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    if (A % B == 0) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        cout << (A + B) / 2 << endl;
    }

    
}