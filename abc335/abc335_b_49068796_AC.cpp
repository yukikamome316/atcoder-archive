/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc335/submissions/49068796
 * Submitted at: 2024-01-06 21:04:37
 * Problem URL: https://atcoder.jp/contests/abc335/tasks/abc335_b
 * Result: AC
 * Execution Time: 3 ms
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
  vector<tuple<int, int, int>> vec;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      for (int k = 0; k <= N; k++) {
        if (i + j + k <= N) vec.push_back({i, j, k});
      }
    }
  }

  sort(vec.begin(), vec.end());
  for (auto e : vec) {
    cout << get<0>(e) << " " << get<1>(e) << " " << get<2>(e) << endl;
  }
}
