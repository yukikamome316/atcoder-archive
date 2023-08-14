/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/44579329
 * Submitted at: 2023-08-14 13:00:40
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/abc107_a
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
  int N, i;
  cin >> N >> i;
  cout << N - i + 1 << endl;
}