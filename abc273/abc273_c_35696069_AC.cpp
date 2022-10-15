/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35696069
 * Submitted at: 2022-10-15 22:56:41
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_c
 * Result: AC
 * Execution Time: 383 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<ll> data(N); rep(i, N) cin >> data[i];
    
    vector<ll> b(data);
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    vector<int> ans(N);
    rep(i, data.size()) {
        auto new_itr = upper_bound(b.begin(), b.end(), data[i]);
        ans[distance(new_itr, b.end())]++;
    }
    rep(i, N) cout << ans[i] << endl;
}