/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc294/submissions/41243771
 * Submitted at: 2023-05-08 14:38:47
 * Problem URL: https://atcoder.jp/contests/abc294/tasks/abc294_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int N; cin >> N;
    
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    rep(i, N) {
        if (A[i] % 2) continue;
        cout << A[i] << " ";
    }
    cout << endl;
}