/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/35996803
 * Submitted at: 2022-10-27 19:23:08
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
 * Result: RE
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
    vector<bool> flags(*max_element(p.begin(), p.end()));

    rep(i, N) {
        flags[p[i]] = true;
        rep(j, N + 1) {
            if (!flags[j]) {
                cout << j << endl;
                break;
            }
        }
    }
}