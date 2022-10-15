/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35693095
 * Submitted at: 2022-10-15 22:37:14
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_c
 * Result: TLE
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<ll> data(N); rep(i, N) cin >> data[i];
    set<ll> st(data.begin(), data.end());
    vector<int> result(N);
    rep(i, N) {
        result[i] = distance(st.upper_bound(data[i]), st.end());
    }
    rep(i, N) {
        cout << count(result.begin(), result.end(), i) << endl;
    }
}