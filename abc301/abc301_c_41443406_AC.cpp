/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/41443406
 * Submitted at: 2023-05-15 21:43:43
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_c
 * Result: AC
 * Execution Time: 26 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string S, T; cin >> S >> T;

    map<char, int> S_cnt, T_cnt;

    S_cnt['@'] = 0, T_cnt['@'] = 0;

    int N = S.size();
    rep(i, N) S_cnt[S[i]]++;
    rep(i, N) T_cnt[T[i]]++;

    vector<char> dict = {
        'a', 't', 'c', 'o', 'd', 'e', 'r'
    };

    bool result = false;

    for (auto&& a : S_cnt)  {
        if (a.first == '@') continue;
        
        if (a.second > T_cnt[a.first]) {
            
            bool exists = false;
            rep(i, dict.size()) {
                if (dict[i] == a.first) exists = true;
            }
            
            if (!exists) continue;

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
            
            bool exists = false;
            rep(i, dict.size()) {
                if (dict[i] == a.first) exists = true;
            }
            
            if (!exists) continue;

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