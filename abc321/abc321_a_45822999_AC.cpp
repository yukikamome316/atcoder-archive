/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc321/submissions/45822999
 * Submitted at: 2023-09-23 21:05:35
 * Problem URL: https://atcoder.jp/contests/abc321/tasks/abc321_a
 * Result: AC
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
  string N;
  cin >> N;
  if (N.size() > 10) {
    cout << "No" << endl;
    return 0;
  }

  bool ok = true;
  rep(i, N.size() - 1) {
    if (N[i] <= N[i + 1]) ok = false;
  }

  cout << (ok ? "Yes" : "No") << endl;
}