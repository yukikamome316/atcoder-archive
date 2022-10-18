/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/35769256
 * Submitted at: 2022-10-18 19:01:37
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_c
 * Result: AC
 * Execution Time: 346 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(i, N) cin >> A[i];

    vector<int> s(N + 1);
    vector<int> e(N + 1);
    for (int i = 1; i <= N; i++) {
        s[i] = max(s[i - 1], A[i - 1]);
    }
    for (int i = 1; i <= N; i++) {
        e[i] = max(e[i - 1], A[N - i]);
    }

    rep(i, N) {
        cout << max(s[i], e[N - i - 1]) << endl;
    }

}