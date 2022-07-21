/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualB/submissions/33393313
 * Submitted at: 2022-07-21 18:54:24
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualB/tasks/tenka1_2012_5
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int a, b, c; cin >> a >> b >> c;
    rep(i, 127) {
        if ((i + 1) % 3 == a
            && (i + 1) % 5 == b
            && (i + 1) % 7 == c)
            cout << i + 1 << endl;
    }
}