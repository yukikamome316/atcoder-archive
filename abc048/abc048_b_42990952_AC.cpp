/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc048/submissions/42990952
 * Submitted at: 2023-06-27 09:27:53
 * Problem URL: https://atcoder.jp/contests/abc048/tasks/abc048_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b, x;
  cin >> a >> b >> x;
  cout << b / x - a / x + (a % x == 0) << endl;
}