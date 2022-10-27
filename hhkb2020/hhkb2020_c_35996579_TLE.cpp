/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/35996579
 * Submitted at: 2022-10-27 19:06:58
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> p(N); rep(i, N) cin >> p[i];

    rep(i, N) {
        vector<int> tmp(p.begin(), p.begin() + i + 1);
        set<int> S(tmp.begin(), tmp.end());
        int max = *S.rbegin();
;
        vector<bool> flags(max + 2);
        rep(j, i + 1) {
            flags[tmp[j]] = true;
        }
        rep(i, max + 2) {
            if (!flags[i]) {
                cout << i << endl;
                break;
            }
        }

    }

}