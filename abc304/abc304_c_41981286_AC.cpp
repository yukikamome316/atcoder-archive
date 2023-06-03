/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41981286
 * Submitted at: 2023-06-04 00:34:19
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_c
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;
  vector<pair<int, int>> pos(N);
  rep(i, N) {
    int X, Y;
    cin >> X >> Y;
    pos[i] = {X, Y};
  }

  dsu ds(N);
  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;
      int dx = pos[i].first - pos[j].first;
      int dy = pos[i].second - pos[j].second;

      if (dx*dx + dy*dy <= D*D)
        ds.merge(i, j);
    }
  }

  rep(i, N)
    cout << (ds.same(0, i) ? "Yes" : "No") << endl;
}
