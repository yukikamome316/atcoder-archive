/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc340/submissions/50168353
 * Submitted at: 2024-02-10 21:51:48
 * Problem URL: https://atcoder.jp/contests/abc340/tasks/abc340_c
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

map<ll, ll> memo;

ll f(ll x) {
  if (memo.contains(x)) return memo[x];
  if (x == 1) return 0;
  ll ret;
  if (x % 2 == 0) ret = f(x / 2) + f(x / 2) + x;
  else ret = f(x / 2) + f((x + 2 - 1) / 2) + x;

  memo[x] = ret;
  return ret;
}

int main() {
  ll N;
  cin >> N;

  cout << f(N) << endl;
}
