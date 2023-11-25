/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc330/submissions/47950565
 * Submitted at: 2023-11-26 01:39:53
 * Problem URL: https://atcoder.jp/contests/abc330/tasks/abc330_b
 * Result: AC
 * Execution Time: 227 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N)
    cout << clamp(A[i], L, R) << endl;
}