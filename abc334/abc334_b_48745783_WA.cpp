/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc334/submissions/48745783
 * Submitted at: 2023-12-23 21:12:40
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

  ll left_idx = (L - A) / M;
  ll right_idx = (R - A) / M;
  if (left_idx * M + A < L) left_idx++;
  ll ans = right_idx - left_idx + 1;
  cout << ans << endl;
}
