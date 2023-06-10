/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42126675
 * Submitted at: 2023-06-10 21:06:29
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_a
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int dist = INT_MAX;
  int result = 0;
  rep(i, 10) {
    if ((N + i - 5) % 5) continue;

    if (dist < abs(i - 5)) continue;
    dist = abs(i - 5);
    result = N + i - 5;
  }

  cout << result << endl;
}