/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/32470526
 * Submitted at: 2022-06-14 19:04:37
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cf
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> P.at(i);
    }
    
    int count = 0;

    rep(i, A.size()) {
        rep(j, P.size()) {
            if (A[i] + P[j] == S) count++;
        }
    }

    cout << count << endl;

}