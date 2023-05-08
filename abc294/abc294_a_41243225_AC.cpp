/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc294/submissions/41243225
 * Submitted at: 2023-05-08 14:15:55
 * Problem URL: https://atcoder.jp/contests/abc294/tasks/abc294_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;    // Nを受け取る

    vector<int> A(N);
    // A_1, A_2, ..., A_NをAに格納する
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++) {
        if (A[i] % 2) continue;
        cout << A[i];

        if (i < N - 1) cout << " ";
        else cout << endl;
    }
}