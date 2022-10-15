/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35663119
 * Submitted at: 2022-10-15 21:02:03
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int f(int n) {
    if (n == 0) return 1;
    else return n * f(n - 1);
}

int main() {
    int N; cin >> N;
    cout << f(N) << endl;
}