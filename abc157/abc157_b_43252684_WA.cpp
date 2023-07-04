/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/43252684
 * Submitted at: 2023-07-04 23:08:43
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  vector<vector<int>> A(3, vector<int>(3));
  rep(i, 3) {
    rep(j, 3) {
      cin >> A[i][j];
    }
  }

  vector<vector<bool>> fi(3, vector<bool>(3, false));
  int N;
  cin >> N;
  rep(i, N) {
    int b;
    cin >> b;
    rep(j, 3) {
      rep(k, 3) {
        if (A[j][k] == b) {
          fi[j][k] = true;
        }
      }
    }
  }

  bool ok = false;
  rep(i, 3) {
    if (fi[0][i] && fi[1][0] && fi[2][0]) ok = true;
  }
  rep(i, 3) {
    if (fi[i][0] && fi[i][1] && fi[i][2]) ok = true;
  }

  if (fi[0][0] && fi[1][1] && fi[2][2]) ok = true;
  if (fi[2][0] && fi[1][1] && fi[0][2]) ok = true;

  cout << (ok ? "Yes" : "No") << endl;
}