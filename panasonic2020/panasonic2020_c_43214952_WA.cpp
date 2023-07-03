/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/43214952
 * Submitted at: 2023-07-03 14:11:04
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_c
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll ab = a * b;
  ll sq_ab = sqrt(ab);
  cout << (2 * sq_ab < c - b - a ? "Yes" : "No") << endl; 
}