/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/45764263
 * Submitted at: 2023-09-21 11:43:20
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_c
 * Result: AC
 * Execution Time: 12 ms
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

  set<ll> st;
  
  for (ll i = 2; i * i <= N; i++) {
    ll x = i * i;
    while (x <= N) {
      st.insert(x);
      x *= i;
    }
  }
  
  // 0^b, 1^bも除外
  cout << N - st.size() << endl;
}