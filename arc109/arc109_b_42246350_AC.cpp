/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc109/submissions/42246350
 * Submitted at: 2023-06-14 08:49:44
 * Problem URL: https://atcoder.jp/contests/arc109/tasks/arc109_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  ll left = 0, right = 2e9;
  while (right - left > 1) {
    ll mid = (left + right) / 2;
    if (mid * (mid + 1) / 2 <= n + 1)
      left = mid;
    else right = mid;
  }

  cout << n - left + 1 << endl;
}