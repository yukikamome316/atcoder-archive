/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc329/submissions/47675174
 * Submitted at: 2023-11-18 21:01:22
 * Problem URL: https://atcoder.jp/contests/abc329/tasks/abc329_a
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
  string S;
  cin >> S;
  rep(i, S.size()) {
    if (i + 1 != S.size())
      cout << S[i] << " ";
    else cout << S[i] << endl;
  }
}
