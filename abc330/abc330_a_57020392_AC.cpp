/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc330/submissions/57020392
 * Submitted at: 2024-08-24 15:00:09
 * Problem URL: https://atcoder.jp/contests/abc330/tasks/abc330_a
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
  int n, l;
  cin >> n >> l;

  int cnt = 0;
  rep(i, n) {
    int a;
    cin >> a;
    if (a >= l)
      cnt++;
  }

  cout << cnt << endl;
}