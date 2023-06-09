/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc140/submissions/41305559
 * Submitted at: 2023-05-11 19:37:35
 * Problem URL: https://atcoder.jp/contests/abc140/tasks/abc140_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<int> A(N); rep(i, N) cin >> A[i], A[i]--;
    vector<int> B(N); rep(i, N) cin >> B[i];
    vector<int> C(N - 1); rep(i, N - 1) cin >> C[i];

    int sum = 0;
    int prev = -2;
    rep(i, N) {
        int eat = A[i];
        sum += B[eat];
        if (eat == prev + 1) sum += C[eat - 1];
        prev = eat;
    }
    cout << sum << endl;
}