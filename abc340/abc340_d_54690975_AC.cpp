/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc340/submissions/54690975
 * Submitted at: 2024-06-18 18:43:06
 * Problem URL: https://atcoder.jp/contests/abc340/tasks/abc340_d
 * Result: AC
 * Execution Time: 182 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, int>>> graph(n);
  rep(i, n - 1) {
    int a, b, x;
    cin >> a >> b >> x;
    x--;
    graph[i].push_back({i + 1, a});
    graph[i].push_back({x, b});
  }

  vector<ll> dist(n, LLONG_MAX);
  dist[0] = 0;

  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  pq.push({0, 0});

  while (!pq.empty()) {
    ll cost = pq.top().first;
    int node = pq.top().second;
    pq.pop();

    if (cost > dist[node]) {
      continue;
    }

    for (auto edge : graph[node]) {
      int nextNode = edge.first;
      ll weight = edge.second;

      if (dist[node] + weight < dist[nextNode]) {
        dist[nextNode] = dist[node] + weight;
        pq.push({dist[nextNode], nextNode});
      }
    }
  }

  cout << dist[n - 1] << endl;
}
