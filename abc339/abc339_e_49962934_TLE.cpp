/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc339/submissions/49962934
 * Submitted at: 2024-02-03 22:22:33
 * Problem URL: https://atcoder.jp/contests/abc339/tasks/abc339_e
 * Result: TLE
 * Execution Time: 2213 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int dfs(pair<int, int> now, int &N, vector<int> &A, int &D, vector<bool> &visited) {
  auto [v, idx] = now;
  // if (visited[idx]) return 0;
  // visited[idx] = true;
  int ans = 0;
  rep(i, N - idx - 1) {
    if (abs(A[idx + i + 1] - v) > D) {
      // visited[idx + i + 1] = true;
      continue;
    }
    chmax(ans, dfs({A[idx + i + 1], idx + i + 1}, N, A, D, visited) + 1);
  }
  return ans;
}

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<bool> visited(N);
  int ans = 0;
  rep(i, N) {
    // if (visited[i]) continue;
    chmax(ans, dfs({A[i], i}, N, A, D, visited));
  }
  cout << ans + 1 << endl;
}
