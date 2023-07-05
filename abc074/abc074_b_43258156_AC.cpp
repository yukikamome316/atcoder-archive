/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc074/submissions/43258156
 * Submitted at: 2023-07-05 09:07:20
 * Problem URL: https://atcoder.jp/contests/abc074/tasks/abc074_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, K;
  cin >> N >> K;

  int dist_sum = 0;
  rep(i, N) {
    int x;
    cin >> x;
    dist_sum += 2 * min(abs(x), abs(x - K));
  }

  cout << dist_sum << endl;
}