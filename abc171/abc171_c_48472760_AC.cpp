/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/48472760
 * Submitted at: 2023-12-13 22:12:13
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_c
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
  ll N;
  cin >> N;

  string ans = "";
  while (N > 0) {
    N--;
    ans += (char)('a' + N % 26);
    N /= 26;
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
