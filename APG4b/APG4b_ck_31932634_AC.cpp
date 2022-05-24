/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31932634
 * Submitted at: 2022-05-24 19:01:09
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ck
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
int main() {
    string S;
    cin >> S;
    int result = 1;
    rep(i, S.length()) {
        if (S[i] == '+') {
            result++;
        } else if (S[i] == '-') {
            result--;
        }
    }
    cout << result << endl;
}