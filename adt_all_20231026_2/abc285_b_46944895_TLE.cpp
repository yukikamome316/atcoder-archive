/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/adt_all_20231026_2/submissions/46944895
 * Submitted at: 2023-10-26 19:21:09
 * Problem URL: https://atcoder.jp/contests/adt_all_20231026_2/tasks/abc285_b
 * Result: TLE
 * Execution Time: 2210 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  string S;
  cin >> N >> S;

  for (int i = 1; i < N; i++) {
    int l = 0;
    int ans = 0;
    while (l + i <= N) {
      bool ok = true;
      for (int k = 1; k <= l; k++) {
        if (S[k - 1] == S[k + i - 1]) ok = false;
      }
      if (ok) chmax(ans, l);
      l++;
    }
    cout << ans << endl;
  }
  
}