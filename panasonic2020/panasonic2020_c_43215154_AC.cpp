/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/43215154
 * Submitted at: 2023-07-03 14:16:39
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  bool ok = false;
  if (c - b - a >= 0) {
    ok = 4 * a * b < (c - b - a)*(c - b - a);
  }
  
  cout << (ok ? "Yes" : "No") << endl; 
}