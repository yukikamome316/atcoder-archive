/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33092575
 * Submitted at: 2022-07-09 21:33:26
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, d;
    cin >> a >> b >> d;
    double rad = d / 180.0 * M_PI;
    cout << a * cos(rad) - b * sin(rad) 
        << a * sin(rad) + b * cos(rad) 
        << endl;
}