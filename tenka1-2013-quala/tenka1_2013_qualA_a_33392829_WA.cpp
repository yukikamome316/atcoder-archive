/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/tenka1-2013-quala/submissions/33392829
 * Submitted at: 2022-07-21 18:24:58
 * Problem URL: https://atcoder.jp/contests/tenka1-2013-quala/tasks/tenka1_2013_qualA_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ll x = 42;
    while (x <= 130000000) {
        x *= x;
    }
    cout << x << endl;
}