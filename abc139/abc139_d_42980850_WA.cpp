/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/42980850
 * Submitted at: 2023-06-26 19:35:49
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_d
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  cout << N * (N - 1) / 2 << endl;
}