/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/31932906
 * Submitted at: 2022-05-24 19:23:32
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
int main() {
    string S1, S2, S3, T;
    cin >> S1 >> S2 >> S3 >> T;
    string result;
    rep(i, T.length()) {
        if (T[i] == '1') {
            result += S1;
        } else if (T[i] == '2') {
            result += S2;
        } else if (T[i] == '3') {
            result += S3;
        }
    }
    cout << result << endl;
    
}