/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41890568
 * Submitted at: 2023-06-01 19:50:10
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: AC
 * Execution Time: 8 ms
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

    sort(S.begin(), S.end());

    do {
        bool ok = true;
        rep(i, N - 1) {
            int diff = 0;
            rep(j, M) {
                if (S[i][j] != S[i + 1][j])
                    diff++;
            }
            
            if (diff != 1) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        } 
    } while (next_permutation(S.begin(), S.end()));

    cout << "No" << endl;
}