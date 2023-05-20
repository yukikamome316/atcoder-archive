/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41579749
 * Submitted at: 2023-05-20 22:39:29
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> S_cnt(N, vector<int>(27, 0));
    rep(i, N) {
        string S; cin >> S;
        rep(j, M) S_cnt[i][S[j] - 'a']++;
    }

    do {
        bool valid = true;

        rep(j, N - 1) {
            int diff = 0;
            rep(k, S_cnt[0].size()) {
                diff += abs(S_cnt[j + 1][k] - S_cnt[j][k]);
            }
            if (diff != 1) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(S_cnt.begin(), S_cnt.end()));
    cout << "No" << endl;
}