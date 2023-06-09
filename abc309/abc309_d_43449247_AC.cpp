/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43449247
 * Submitted at: 2023-07-10 13:59:52
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_d
 * Result: AC
 * Execution Time: 603 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int N1, N2;

int getFarPos(vector<set<int>> G, int s, int g) {
  vector<int> dist(N1 + N2, -1);
  dist[s] = 0;
  queue<int> q;
  q.push(s);
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int e : G[x]) {
      if (dist[e] != -1) continue;
      dist[e] = dist[x] + 1;
      q.push(e);
    }
  }
  return *max_element(dist.begin(), dist.end());
}

int main() {
  int M;
  cin >> N1 >> N2 >> M;
  vector<set<int>> G(N1 + N2);
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    G[a - 1].insert(b - 1);
    G[b - 1].insert(a - 1);
  }

  cout << getFarPos(G, 0, N1 - 1) + getFarPos(G, N1 + N2 - 1, N1) + 1 << endl;
}