/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc151/submissions/35729334
 * Submitted at: 2022-10-16 21:55:28
 * Problem URL: https://atcoder.jp/contests/arc151/tasks/arc151_a
 * Result: WA
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    string S, T; cin >> S >> T;

    vector<string> result;
    for (ll bit = 1 << N - 1; bit >= 0; bit--) {
        string U;
        rep(i, N) {
            if (bit & (1 << i)) U += "1";
            else U += "0";
        }
        
        int S_distance = 0, T_distance = 0;
        rep(i, N) {
            if (U[i] != S[i]) S_distance++;
        }
        rep(i, N) {
            if (U[i] != T[i]) T_distance++;
        }
        if (S_distance == T_distance)
            result.push_back(U);
    }

    if (result.size() == 0) {
        cout << -1 << endl;
        return 0;
    }

    sort(result.begin(), result.end());
    cout << result[0] << endl;
}