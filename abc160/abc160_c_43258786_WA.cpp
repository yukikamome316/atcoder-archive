/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc160/submissions/43258786
 * Submitted at: 2023-07-05 09:53:32
 * Problem URL: https://atcoder.jp/contests/abc160/tasks/abc160_c
 * Result: WA
 * Execution Time: 58 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<int> dist(N);
  rep(i, N) {
    dist[i] = A[(i + 1) % K] - A[i];
    while (dist[i] < 0) {
      dist[i] += K;
    }
  }
  auto max_itr = max_element(dist.begin(), dist.end());
  dist.erase(max_itr);
  cout << accumulate(dist.begin(), dist.end(), 0ll) << endl;
}