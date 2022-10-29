/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36058037
 * Submitted at: 2022-10-29 21:43:00
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<ll> H(N); rep(i, N) cin >> H[i];
    cout << max_element(H.begin(), H.end()) - H.begin() + 1 << endl;
}