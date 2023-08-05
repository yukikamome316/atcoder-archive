/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc313/submissions/44272036
 * Submitted at: 2023-08-05 21:17:21
 * Problem URL: https://atcoder.jp/contests/abc313/tasks/abc313_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  rep(i, N) cin >> P[i];
  int diff = *max_element(P.begin() + 1, P.end()) - P[0];
  cout << (diff >= 0 ? diff + 1 : 0) << endl;
}