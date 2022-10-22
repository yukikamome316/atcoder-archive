/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35865577
 * Submitted at: 2022-10-22 21:04:48
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int A, B; cin >> A >> B;
    printf("%.3lf", (double)B / A);
}