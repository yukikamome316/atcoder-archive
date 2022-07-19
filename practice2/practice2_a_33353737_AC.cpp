/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/33353737
 * Submitted at: 2022-07-19 12:57:13
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_a
 * Result: AC
 * Execution Time: 253 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int N, Q; cin >> N >> Q;
    dsu ds(N);
    rep(i, Q) {
        int query; cin >> query;
        int u, v; cin >> u >> v;
        if (query == 0) {    
            ds.merge(u, v);
        } else {
            cout << (ds.same(u, v) ? 1 : 0) << endl;
        }
    }
}