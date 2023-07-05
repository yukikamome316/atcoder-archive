/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/43261851
 * Submitted at: 2023-07-05 12:11:15
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_c
 * Result: AC
 * Execution Time: 39 ms
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
  vector<int> d(N);
  rep(i, N) cin >> d[i];

  sort(d.begin(), d.end());
  
  cout << d[N / 2] - d[N / 2 - 1] << endl;
}