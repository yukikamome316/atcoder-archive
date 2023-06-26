/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/42980893
 * Submitted at: 2023-06-26 19:38:14
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  cout << N * (N - 1) / 2 << endl;
}