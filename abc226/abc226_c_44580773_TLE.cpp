/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/44580773
 * Submitted at: 2023-08-14 14:29:17
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_c
 * Result: TLE
 * Execution Time: 2271 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll dfs(int v, vector<int> T, vector<bool> &seen, vector<vector<int>> G) {
  seen[v] = true;
  ll ans = T[v];
  for (int e : G[v]) {
    if (!seen[e]) {
      seen[e] = true;
      ans += dfs(e, T, seen, G);
    }
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  vector<vector<int>> G(N);
  vector<int> T(N);
  rep(i, N) {
    int T_tmp, K;
    cin >> T_tmp >> K;
    T[i] = T_tmp;
    
    rep(j, K) {
      int A;
      cin >> A;
      A--;
      G[i].push_back(A);
    }
  }

  vector<bool> seen(N);
  cout << dfs(N - 1, T, seen, G) << endl;
}