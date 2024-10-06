/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/54690414
 * Submitted at: 2024-06-18 18:23:17
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_b
 * Result: AC
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, d;
    cin >> a >> b >> d;
    double rad = (double)d / 180.0 * M_PI;
    cout << std::fixed
        << std::setprecision(15)
        << a * cos(rad) - b * sin(rad) 
        << " "
        << a * sin(rad) + b * cos(rad) 
        << endl;
}