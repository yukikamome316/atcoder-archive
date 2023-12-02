/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc331/submissions/48118326
 * Submitted at: 2023-12-02 21:25:16
 * Problem URL: https://atcoder.jp/contests/abc331/tasks/abc331_b
 * Result: WA
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;

  int ans = 2e9;
  // 6 * x + 8 * y + 12 * z >= Nを満たすx, y, zの組み合わせに対して、
  // 6 * S + 8 * M + 12 * Lを最小化する
  rep(x, N) {
    rep(y, N) {
      rep(z, N) {
        if (6 * x + 8 * y + 12 * z >= N) {
          chmin(ans, x * S + y * M + z * L);
        }
      }
    }
  }

  cout << ans << endl;
}
