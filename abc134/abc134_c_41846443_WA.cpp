/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc134/submissions/41846443
 * Submitted at: 2023-05-30 14:36:14
 * Problem URL: https://atcoder.jp/contests/abc134/tasks/abc134_c
 * Result: WA
 * Execution Time: 332 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    vector<int> s(N + 1, -1), e(N + 1, -1);
    rep(i, N) s[i + 1] = max(s[i], A[i]);
    rep(i, N) e[i + 1] = max(e[N - i - 1], A[N - i - 1]);

    rep(i, N)
        cout << max(s[i], e[N - i - 1]) << endl;
}

