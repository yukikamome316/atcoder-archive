/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/41304555
 * Submitted at: 2023-05-11 18:38:05
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B; cin >> A >> B;
    cout << (A + B) % 24 << endl;
}