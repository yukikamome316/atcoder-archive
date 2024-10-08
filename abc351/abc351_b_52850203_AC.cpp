/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc351/submissions/52850203
 * Submitted at: 2024-04-27 21:10:49
 * Problem URL: https://atcoder.jp/contests/abc351/tasks/abc351_b
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
  int n;
  cin >> n;
  vector<string> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  rep(i, n) {
    rep(j, n) {
      if (a[i][j] != b[i][j]) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
}
