/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35765918
 * Submitted at: 2022-10-18 15:45:05
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: WA
 * Execution Time: 20 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int calcDistance(string A, string B, int N) {
    int count = 0;
    rep(i, N) {
        if (A[i] != B[i]) count++;
    }
    return count;
}

int main() {
    int N; cin >> N;
    string S, T; cin >> S >> T;
    int D_st = calcDistance(S, T, N);
    if (D_st % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }
    string U;
    int zero_count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == T[i]) {
            U += "0";
        } else {
            if (zero_count <= D_st / 2) {
                U += "0";
                zero_count++;
            } else {
                U += "1";
            }
        }
    }
 
    cout << U << endl;
}