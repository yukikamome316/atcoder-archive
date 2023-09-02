/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc318/submissions/45145328
 * Submitted at: 2023-09-02 21:17:51
 * Problem URL: https://atcoder.jp/contests/abc318/tasks/abc318_a
 * Result: AC
 * Execution Time: 29 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll N, M, P;
  cin >> N >> M >> P;
  
  ll cnt = 0;
  rep(i, 100000000) {
    if (M + i * P <= N) cnt++;
  }

  cout << cnt << endl;
}