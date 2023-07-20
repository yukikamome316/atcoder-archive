/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc121/submissions/43777007
 * Submitted at: 2023-07-20 19:43:23
 * Problem URL: https://atcoder.jp/contests/arc121/tasks/arc121_a
 * Result: WA
 * Execution Time: 377 ms
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
  vector<pair<int, int>> pos(N);
  multiset<int> px, py;
  rep(i, N) {
    int x, y;
    cin >> x >> y;
    pos[i] = {x, y};
    if (i == 0) continue;
    px.insert(x);
    py.insert(y);
  }

  priority_queue<int> pq;
  rep(i, N - 1) {
    auto [nx, ny] = pos[i];
    auto [nnx, nny] = pos[i+1];

    pq.push(max(abs(nx - *px.begin()), abs(ny - *py.begin())));
    pq.push(max(abs(ny - *px.rbegin()), abs(ny - *py.rbegin())));

    px.erase(px.find(nnx));
    py.erase(py.find(nny));
  }
  pq.pop();
  cout << pq.top() << endl;

}