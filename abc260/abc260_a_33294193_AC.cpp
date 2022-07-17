/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33294193
 * Submitted at: 2022-07-17 21:03:37
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
#define repi(i, n, s) for (int i = s, i < n; i++)

typedef long long ll;
using namespace std;

int main() {
    string S; cin >> S;
    rep(i, 3) {
        if (count(S.begin(), S.end(), S[i]) == 1) {
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}