/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc313/submissions/44282245
 * Submitted at: 2023-08-05 21:37:16
 * Problem URL: https://atcoder.jp/contests/abc313/tasks/abc313_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<bool>> mightier(N, vector<bool>(N));
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    mightier[A][B] = true;
  }

  rep(i, N) {
    rep(j, N) {
      rep(k, N) {
        if (i == j || j == k || k == i) continue;
        if (mightier[i][j] && mightier[j][k])
          mightier[i][k] = true;
      }
    }
  }

  bool exists = false;
  int ans = -1;
  rep(i, N) {
    bool ok = true;
    rep(j, N) {
      if (i == j) continue;
      if (!mightier[i][j]) ok = false;
    }

    if (ok) {
      if (!exists) {
        exists = true;
        ans = i;
      } else {
        cout << -1 << endl;
        return 0;
      }
    }
  }

  cout << (exists ? ans + 1 : -1) << endl;
}