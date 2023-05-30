/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/41844080
 * Submitted at: 2023-05-30 11:40:14
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_c
 * Result: AC
 * Execution Time: 1036 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    ll sum = 0;
    rep(i, N - K + 1) {
        rep(j, K) {
            sum += a[i + j];
        }
    }

    cout << sum << endl;
}