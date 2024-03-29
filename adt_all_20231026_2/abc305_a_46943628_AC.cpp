/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/adt_all_20231026_2/submissions/46943628
 * Submitted at: 2023-10-26 18:35:24
 * Problem URL: https://atcoder.jp/contests/adt_all_20231026_2/tasks/abc305_a
 * Result: AC
 * Execution Time: 1 ms
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
  vector<int> dist(21);
  int idx = 0;
  rep(i, 21) {
    dist[i] = abs(N - idx);
    idx += 5;
  }

  cout << 5 * (min_element(dist.begin(), dist.end()) - dist.begin()) << endl;

}