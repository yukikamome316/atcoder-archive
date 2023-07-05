/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc161/submissions/43261743
 * Submitted at: 2023-07-05 12:06:16
 * Problem URL: https://atcoder.jp/contests/abc161/tasks/abc161_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll N, K;
  cin >> N >> K;
  ll x = N % K;
  cout << min(x, abs(x - K)) << endl;
}