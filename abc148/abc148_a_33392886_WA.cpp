/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/33392886
 * Submitted at: 2022-07-21 18:28:57
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_a
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int A, B; cin >> A >> B;
    if (A == 1 && B == 2) {
        cout << 3 << endl;
    } else if (A == 1 && B == 3) {
        cout << 2 << endl;
    } else if (A == 2 && B == 1) {
        cout << 3 << endl;
    } else if (A == 2 && B == 3) {
        cout << 1 << endl;
    } else if (A == 3 && B == 1) {
        cout << 2 << endl;
    } else if (A == 3 && B == 2) {
        cout << 2 << endl;
    }
}