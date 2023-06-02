/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/41900376
 * Submitted at: 2023-06-02 10:25:19
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_d
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

ll calcXorTrick(ll n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ll A, B;
    cin >> A >> B;

    cout << (calcXorTrick(B) ^ calcXorTrick(A - 1)) << endl;
}