/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53588433
 * Submitted at: 2024-05-18 21:06:20
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_a
 * Result: WA
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
  ll H;
  cin >> H;
  int ans = ceil(log2(H + 1));
  if (ans == H) ans++;
  cout << ans << endl;
}
