/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/43259078
 * Submitted at: 2023-07-05 10:11:00
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_c
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  int ans = 2e9;
  rep(i, N) {
    int tmp = A[(i + N - 1) % N] - A[i];
    while (tmp < 0) tmp += K;
    chmin(ans, tmp);
  }

  cout << ans << endl;

}