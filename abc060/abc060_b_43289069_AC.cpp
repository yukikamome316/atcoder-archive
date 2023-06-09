/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc060/submissions/43289069
 * Submitted at: 2023-07-06 16:31:34
 * Problem URL: https://atcoder.jp/contests/abc060/tasks/abc060_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  rep(i, B) {
    if (A * i % B == C) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
}