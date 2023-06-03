/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41973519
 * Submitted at: 2023-06-03 22:39:08
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_c
 * Result: WA
 * Execution Time: 2247 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int INF = INT_MAX;

double distance(pair<int, int> a, pair<int, int> b) {
  double distance = sqrt(
    (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second)
  );
  return distance;
}

int main() {
  int N, D;
  cin >> N >> D;
  vector<pair<int, int>> pos(N);
  rep(i, N) {
    int X, Y;
    cin >> X >> Y;
    pos[i] = {X, Y};
  }

  vector<bool> results(N, false);
  results[0] = true;

  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int x = q.front();
    q.pop();

    vector<double> distances(N, INF);
    rep(i, N) {
      if (i == x) continue;
      distances[i] = distance(pos[i], pos[x]);
    }

    rep(i, N) {
      if (i == x) continue;
      if (distances[i] <= D)
        q.push(i);
        results[i] = true;
    }
  }

  rep(i, N)
    cout << (results[i] ? "Yes" : "No") << endl;
}