/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc321/submissions/45882289
 * Submitted at: 2023-09-23 22:33:07
 * Problem URL: https://atcoder.jp/contests/abc321/tasks/abc321_d
 * Result: WA
 * Execution Time: 2207 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M, P;
  cin >> N >> M >> P;
  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  sort(B.begin(), B.end());
  
  ll ans = 0;
  rep(i, N) {
    auto itr = upper_bound(B.begin(), B.end(), P - A[i]);
    ans += accumulate(B.begin(), itr, P * (int)(B.end() - itr));
    ans += A[i] * (ll)(itr - B.begin());
  }

  cout << ans << endl;
}