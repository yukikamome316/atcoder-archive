/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc357/submissions/54327630
 * Submitted at: 2024-06-08 21:03:50
 * Problem URL: https://atcoder.jp/contests/abc357/tasks/abc357_a
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
  int n, m;
  cin >> n >> m;
  rep(i, n) {
    int h;
    cin >> h;
    if (h > m) {
      cout << i << endl;
      return 0;
    }
    m -= h;
  }
  cout << n << endl;
} 
