/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/33218944
 * Submitted at: 2022-07-14 18:25:18
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int n; cin >> n;
    string result;
    if (n == 100) {
        result = "Perfect";
    } else if (n >= 90) {
        result = "Great";
    } else if (n >= 60) {
        result = "Good";
    } else {
        result = "Bad";
    }
    cout << result << endl;
}