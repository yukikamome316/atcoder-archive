/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31932469
 * Submitted at: 2022-05-24 18:49:50
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cm
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
int main() {
    int A, B;
    cin >> A >> B;
    cout << "A:";
    rep(i, A) {
        cout << "]";
    }
    cout << endl;
    cout << "B:";
    rep(i, B) {
        cout << "]";
    }
    cout << endl;
}