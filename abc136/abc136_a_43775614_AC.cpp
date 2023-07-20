/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/43775614
 * Submitted at: 2023-07-20 18:39:54
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_a
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
  int a,b,c;cin >> a >> b >> c;
  cout << c - min(a-b,c) << endl;
}