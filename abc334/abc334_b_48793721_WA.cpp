/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc334/submissions/48793721
 * Submitted at: 2023-12-23 22:30:32
 * Problem URL: https://atcoder.jp/contests/abc334/tasks/abc334_b
 * Result: WA
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll A, M, L, R;
  cin >> A >> M >> L >> R;

  ll l = ceilf128((long double)(L - A) / M), r = (long double)(R - A) / M;
  cout << max(0LL, r - l + 1) << endl;
}
