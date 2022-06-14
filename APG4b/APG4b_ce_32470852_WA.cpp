/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/32470852
 * Submitted at: 2022-06-14 19:29:50
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ce
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    rep(i, M) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<char>> vec2(N, vector<char>(N, '-'));
    
    rep(k, M) {
        vec2[A[k] - 1][B[k] - 1] = 'o';
        vec2[B[k] - 1][A[k] - 1] = 'x';
    }

    rep(i, N) {
        rep(j, N) {
            cout << vec2[j][i];
            if (j != N - 1) cout << " ";
        }
        cout << endl;
    }

}