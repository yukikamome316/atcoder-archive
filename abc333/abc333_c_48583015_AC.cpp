/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc333/submissions/48583015
 * Submitted at: 2023-12-16 22:01:30
 * Problem URL: https://atcoder.jp/contests/abc333/tasks/abc333_c
 * Result: AC
 * Execution Time: 2 ms
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
  cin >> N;
  
  vector<ll> repunit;
  for(int i = 1; i <= 18; i++) {
    ll x = 0;
    rep(j, i) x = x * 10 + 1;
    repunit.push_back(x);
  }

  sort(repunit.begin(), repunit.end());

  set<ll> st;  
  rep(i, repunit.size()) {
    rep(j, repunit.size()) {
      rep(k, repunit.size()) {
        st.insert(repunit[i] + repunit[j] + repunit[k]);
      }
    }
  }

  vector<ll> ans(st.begin(), st.end());

  cout << ans[N-1] << endl;
}
