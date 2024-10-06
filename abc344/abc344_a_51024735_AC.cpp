/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc344/submissions/51024735
 * Submitted at: 2024-03-09 21:02:28
 * Problem URL: https://atcoder.jp/contests/abc344/tasks/abc344_a
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

  bool ok = true;
  rep(i, S.size()) {
    if (ok && S[i] == '|') {
      ok = false;
      continue;
    } else if (!ok && S[i] == '|') {
      ok = true;
      continue;
    }

    if (ok) cout << S[i];
  }
  cout << endl;
}
