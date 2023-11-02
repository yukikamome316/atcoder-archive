/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/47157869
 * Submitted at: 2023-11-02 20:40:20
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_d
 * Result: WA
 * Execution Time: 46 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  vector<pair<int, int>> data(N);
  vector<int> r(N);
  rep(i, N) {
    int x, y, r_tmp;
    cin >> x >> y >> r_tmp;
    data[i] = {x, y};
    r[i] = r_tmp;
  }

  dsu d(N);
  
  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;
      auto [x1, y1] = data[i];
      auto [x2, y2] = data[j];

      ll dist_sq = (ll)(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
      if ((ll)(r[i] + r[j]) * (r[i] + r[j]) <= dist_sq
          && dist_sq >= (ll)(r[i] - r[j]) * (r[i] - r[j])) d.merge(i, j);
    }
  }

  int s_idx = -1, t_idx = -1;
  rep(i, N) {
    auto [x, y] = data[i];
    if ((ll)(sx - x) * (sx - x) + (ll)(sy - y) * (sy - y) == (ll)r[i] * r[i]) {
      s_idx = i;
    }
    
    if ((ll)(tx - x) * (tx - x) + (ll)(ty - y) * (ty - y) == (ll)r[i] * r[i]) {
      t_idx = i;
    }
  }

  assert(s_idx >= 0 && t_idx >= 0);

  cout << (d.same(s_idx, t_idx) ? "Yes" : "No") << endl;
}