/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35762374
 * Submitted at: 2022-10-18 11:16:34
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: WA
 * Execution Time: 2205 ms
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

    if (calcDistance(S, T, N) % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }
    string U;
    rep(i, N) {
        U += "0";
    }
    int D = calcDistance(S, U, N) - calcDistance(T, U, N);
    int idx = N - 1;
    while (D != 0 && idx >= 0) {
        if (D > 0) {
            U[idx] = S[idx];
        } else {
            U[idx] = T[idx];
        }
        D = calcDistance(S, U, N) - calcDistance(T, U, N);
        idx--;
    }

    cout << U << endl;
}