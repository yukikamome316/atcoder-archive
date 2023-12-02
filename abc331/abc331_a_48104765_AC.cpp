/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc331/submissions/48104765
 * Submitted at: 2023-12-02 21:07:03
 * Problem URL: https://atcoder.jp/contests/abc331/tasks/abc331_a
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
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;
  
  d++;
  if (d > D) {
    d = 1;
    m++;
  }
  if (m > M) {
    m = 1;
    y++;
  }
  cout << y << " " << m << " " << d << endl;
}
