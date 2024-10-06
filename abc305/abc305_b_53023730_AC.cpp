/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/53023730
 * Submitted at: 2024-05-02 19:11:58
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_b
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  char p, q;
  cin >> p >> q;
  vector<int> dest = {3, 1, 4, 1, 5, 9};
  vector<int> s(7);
  s[0] = 0;
  rep(i, 6) s[i + 1] = s[i] + dest[i];
  if (p > q) swap(p, q);
  cout << s[q - 'A'] - s[p - 'A'] << endl;
}
