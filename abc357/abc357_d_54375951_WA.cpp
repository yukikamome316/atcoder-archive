/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc357/submissions/54375951
 * Submitted at: 2024-06-08 22:36:15
 * Problem URL: https://atcoder.jp/contests/abc357/tasks/abc357_d
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  ll n;
  cin >> n;
  string s = to_string(n);
  int l = s.size();
  
  ll r = 1;
  rep(i, l) {
    r *= 10;
  }

  mint ans = pow_mod(r, n, 998244353) - 1;
  ans *= n;
  ans /= r - 1;

  cout << ans.val() << endl;
}
