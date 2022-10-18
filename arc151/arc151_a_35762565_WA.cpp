/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35762565
 * Submitted at: 2022-10-18 11:28:50
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: WA
 * Execution Time: 19 ms
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
        if (S[idx] != T[idx]) {
            if (D > 0) {
                U[idx] = S[idx];
                D -= 2;
            } else {
                U[idx] = T[idx];
                D += 2;
            }
        }
        idx--;
    }

    cout << U << endl;
}