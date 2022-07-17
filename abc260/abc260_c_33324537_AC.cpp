/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33324537
 * Submitted at: 2022-07-17 23:29:38
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
#define repi(i, n, s) for (int i = s; i < n; i++)

typedef long long ll;
typedef long long ll;
using namespace std;

int main() {
    int N, X, Y; cin >> N >> X >> Y;
    ll r[12], b[12];

    r[1] = 0, b[1] = 1;
    repi(n, N + 1, 2) {
        b[n] = r[n - 1] + Y * b[n - 1];
        r[n] = r[n - 1] + X * b[n];
    }
    cout << r[N] << endl;
}