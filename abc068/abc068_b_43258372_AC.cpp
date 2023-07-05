/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc068/submissions/43258372
 * Submitted at: 2023-07-05 09:26:40
 * Problem URL: https://atcoder.jp/contests/abc068/tasks/abc068_b
 * Result: AC
 * Execution Time: 8 ms
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

  int log = 0;
  for (int i = 60; i >= 0; i--) {
    if (N & (1ll << i)) {
      log = i;
      break;
    }
  }
  cout << (1ll << log) << endl;
}