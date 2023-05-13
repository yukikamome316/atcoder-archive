/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/41391325
 * Submitted at: 2023-05-13 22:45:01
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_c
 * Result: WA
 * Execution Time: 25 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string S, T; cin >> S >> T;

    map<char, int> S_cnt, T_cnt;

    int N = S.size();
    rep(i, N) S_cnt[S[i]]++;
    rep(i, N) T_cnt[T[i]]++;

    bool result = false;

    for (auto&& a : S_cnt)  {
        if (a.first == '@') continue;

        if (a.second > T_cnt[a.first]) {
            if (a.second - T_cnt[a.first] > T_cnt['@']) {
                result = false;
                break;
            }
            T_cnt['@'] -= a.second - T_cnt[a.first];
            T_cnt[a.first] += a.second - T_cnt[a.first];
        }

    }

    for (auto&& a : T_cnt)  {
        if (a.first == '@') continue;

        if (a.second > S_cnt[a.first]) {
            if (a.second - S_cnt[a.first] > S_cnt['@']) {
                result = false;
                break;
            }
            S_cnt['@'] -= a.second - S_cnt[a.first];
            S_cnt[a.first] += a.second - S_cnt[a.first];
        }

    }


    if (S_cnt == T_cnt) {
        result = true;
    }


    cout << (result ? "Yes" : "No") << endl;

}