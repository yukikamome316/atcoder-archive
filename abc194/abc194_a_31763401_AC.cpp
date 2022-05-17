/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/31763401
 * Submitted at: 2022-05-17 18:59:40
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int R = A + B;
    int result = 0;
    if (R >= 15 && B >= 8) {
        result = 1;
    } else if (R >= 10 && B >= 3) {
        result = 2;
    } else if (R >= 3) {
        result = 3;
    } else {
        result = 4;
    }
    cout << result << endl;
}