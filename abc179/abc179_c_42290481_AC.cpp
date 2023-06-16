/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/42290481
 * Submitted at: 2023-06-16 16:18:03
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll cnt = 0;
  for (int i = 1; i < N; i++) {
    cnt += (N - 1) / i;
  }

  cout << cnt << endl;
}