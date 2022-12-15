/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/practice2/submissions/37284738
 * Submitted at: 2022-12-15 19:11:40
 * Problem URL: https://atcoder.jp/contests/practice2/tasks/practice2_b
 * Result: AC
 * Execution Time: 815 ms
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
    fenwick_tree<ll> bit(N);

    rep(i, N) {
        int v; cin >> v;
        bit.add(i, v);
    }

    rep(_, Q) {
        int com; cin >> com;
        if (com == 0) {
            int p, x; cin >> p >> x;
            bit.add(p, x);
        } else if (com == 1) {
            int l, r; cin >> l >> r;
            cout << bit.sum(l, r) << endl;
        }
    }
}