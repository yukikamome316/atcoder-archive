/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/agc029/submissions/42015865
 * Submitted at: 2023-06-05 16:28:29
 * Problem URL: https://atcoder.jp/contests/agc029/tasks/agc029_a
 * Result: WA
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  int ans = 0, b_cnt = 0;
  rep(i, S.size()) {
    if (S[i] == 'W') ans += b_cnt;
    else b_cnt++;
  }

  cout << ans << endl;
}