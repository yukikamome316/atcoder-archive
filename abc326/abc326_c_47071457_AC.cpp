/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc326/submissions/47071457
 * Submitted at: 2023-10-29 22:11:13
 * Problem URL: https://atcoder.jp/contests/abc326/tasks/abc326_c
 * Result: AC
 * Execution Time: 108 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());

  ll ans = 0;
  rep(i, N)
    chmax(ans, (ll)(lower_bound(A.begin(), A.end(), A[i] + M) - A.begin()) - i);
  
  cout << ans << endl;
}
