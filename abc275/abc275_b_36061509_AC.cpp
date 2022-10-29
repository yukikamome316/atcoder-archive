/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36061509
 * Submitted at: 2022-10-29 21:55:20
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    modint998244353 result = 1;
    result *= A;
    result *= B;
    result *= C;
    modint998244353 tmp = 1;
    tmp *= D;
    tmp *= E;
    tmp *= F;
    result -= tmp;
    cout << result.val() << endl;
}