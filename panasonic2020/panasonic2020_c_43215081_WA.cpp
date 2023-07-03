/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/43215081
 * Submitted at: 2023-07-03 14:14:24
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  cout << (4 * a * b < (c - b - a)*(c - b - a) ? "Yes" : "No") << endl; 
}