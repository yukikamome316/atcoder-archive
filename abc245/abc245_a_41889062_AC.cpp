/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/41889062
 * Submitted at: 2023-06-01 18:29:57
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    bool ok = false;
    if (A < C) ok = true;
    else if (A == C && B <= D) ok = true;

    cout << (ok ? "Takahashi" : "Aoki") << endl;
}