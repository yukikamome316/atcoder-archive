/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41023944
 * Submitted at: 2023-04-29 21:02:11
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N, A, B; cin >> N >> A >> B;
    vector<int> C(N);
    rep(i, N) cin >> C[i];

    int ans = A + B;
    rep(i, N) {
        if (C[i] == ans) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}