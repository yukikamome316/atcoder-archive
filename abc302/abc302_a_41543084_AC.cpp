/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41543084
 * Submitted at: 2023-05-20 21:06:01
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll A, B; cin >> A >> B;
    if (A % B) cout << A / B + 1 << endl;
    else cout << A / B << endl;
    
}