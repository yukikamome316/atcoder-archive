/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31932573
 * Submitted at: 2022-05-24 18:57:38
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cl
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
int main() {
    int N, A;
    cin >> N >> A;

    rep(i, N) {
        string op;
        int B;
        cin >> op >> B;

        if (op == "+") {
            A += B;
        } else if (op == "-") {
            A -= B;
        } else if (op == "*") {
            A *= B;
        } else if (op == "/") {
            if (!B) {
                cout << "error" << endl;
                return 0;
            }
            A /= B;
        }
        cout << i + 1 << ":" << A << endl;
    }
}