/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/agc046/submissions/43775971
 * Submitted at: 2023-07-20 18:54:23
 * Problem URL: https://atcoder.jp/contests/agc046/tasks/agc046_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int X;
  cin >> X;
  cout << 360 / gcd(X, 360) << endl;
}