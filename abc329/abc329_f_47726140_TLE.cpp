/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc329/submissions/47726140
 * Submitted at: 2023-11-18 22:32:44
 * Problem URL: https://atcoder.jp/contests/abc329/tasks/abc329_f
 * Result: TLE
 * Execution Time: 4416 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, Q;
  cin >> N >> Q;
  
  vector<map<int, int>> boxes(N);
  rep(i, N) {
    map<int, int> mp;
    int C;
    cin >> C;
    mp[C]++;
    boxes[i] = mp;
  }

  rep(_, Q) {
    int src, dest;
    cin >> src >> dest;
    src--, dest--;
    map<int, int> null_map;
    for (auto [k, v] : boxes[src]) {
      boxes[dest][k] += v;
    }
    boxes[src] = null_map;
    
    cout << boxes[dest].size() << endl;
  }
}
