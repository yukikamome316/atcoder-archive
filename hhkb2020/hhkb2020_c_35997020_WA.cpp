/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/35997020
 * Submitted at: 2022-10-27 19:39:14
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
 * Result: WA
 * Execution Time: 340 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<ll> p(N); rep(i, N) cin >> p[i];
    vector<bool> flags(N);

    ll result = 0;
    rep(i, N) {
        flags[p[i]] = true;
        while (flags[result]) result++;
        cout << result << endl;
    }
    
}