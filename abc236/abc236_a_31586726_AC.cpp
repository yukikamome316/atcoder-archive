/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/31586726
 * Submitted at: 2022-05-10 19:09:27
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int a, b;
    cin >> S >> a >> b;
    string result = S;
    char c = S[a - 1];
    result[a - 1] = result[b - 1];
    result[b - 1] = c;
    cout << result << endl;
}
