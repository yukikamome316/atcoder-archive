/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc334/submissions/48778094
 * Submitted at: 2023-12-23 21:54:11
 * Problem URL: https://atcoder.jp/contests/abc334/tasks/abc334_b
 * Result: WA
 * Execution Time: 1 ms
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

  ll l = (L - A) / M;
  if ((L - A) % M != 0) l++;
  ll r = (R - A) / M;
  cout << max(0LL, r - l + 1) << endl;
}
