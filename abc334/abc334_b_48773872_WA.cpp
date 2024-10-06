/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc334/submissions/48773872
 * Submitted at: 2023-12-23 21:46:32
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

  ll l_ceil = L >= 0 ? (L - A + M - 1) / M : (L - A) / M;
  ll r_ceil = R >= 0 ? (R - A + M - 1) / M : (R - A) / M;
  ll l_floor = (L - A) / M;
  ll r_floor = (R - A) / M;

  ll plus = ((L - A) % M == 0 || (R - A) / M == 0 ? 1 : 0);

  if (L >= 0 && R >= 0) cout << max(0LL, r_floor - l_ceil + plus) << endl;
  else if (L < 0 && R >= 0) cout << max(0LL, r_floor - l_ceil + plus) << endl;
  else if (L < 0 && R < 0) cout << max(0LL, r_floor - l_ceil + plus) << endl;
  else cout << max(0LL, r_floor - l_ceil + plus) << endl;
}
