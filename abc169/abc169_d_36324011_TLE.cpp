/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc169/submissions/36324011
 * Submitted at: 2022-11-08 19:41:46
 * Problem URL: https://atcoder.jp/contests/abc169/tasks/abc169_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    ll N; cin >> N;

    ll tmp = N;
    vector<pair<ll, ll>> factorize;
    for (int i = 2; i * i <= tmp; i++) {
        int cnt = 0;
        while (tmp % i == 0) {
            cnt++;
            tmp /= i;
        }
        if (cnt != 0) factorize.push_back({i, cnt});
    }
    if (tmp != 1) factorize.push_back({tmp, 1});

    int result = 0;
    for (auto [p, e] : factorize) {
        int e_tmp = 1;
        while (e_tmp * (e_tmp + 1) / 2 <= e) {
            result++, e_tmp++;
        }
    }
    
    cout << result << endl;
}