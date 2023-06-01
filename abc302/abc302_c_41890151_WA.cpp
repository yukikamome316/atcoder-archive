/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41890151
 * Submitted at: 2023-06-01 19:26:17
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    rep(i, N) cin >> S[i];

    rep(i, N - 1) {
        bool ok = false;
        rep(j, M - 1) {
            rep2(k, j + 1, M) {
                string current = S[i];
                string next = S[i + 1];

                swap(current[j], current[k]);
                if (current == next) ok = true;
            }
        }
        if (!ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}