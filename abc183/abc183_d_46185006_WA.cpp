/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc183/submissions/46185006
 * Submitted at: 2023-10-03 18:34:33
 * Problem URL: https://atcoder.jp/contests/abc183/tasks/abc183_d
 * Result: WA
 * Execution Time: 99 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll N, W;
  cin >> N >> W;
  vector<ll> S(N), T(N), P(N);
  rep(i, N) {
    cin >> S[i] >> T[i] >> P[i];
  }

  ll max_time = *max_element(T.begin(), T.end());
  vector<ll> table(max_time);
  rep(i, N) {
    table[S[i]] += P[i];
    table[T[i]] -= P[i];
  }

  rep(i, max_time - 1) {
    if (i > 0) table[i + 1] += table[i];
  }

  rep(i, max_time) {
    if (table[i] > W) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}