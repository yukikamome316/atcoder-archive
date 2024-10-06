/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/dp/submissions/48656628
 * Submitted at: 2023-12-19 18:11:41
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_a
 * Result: WA
 * Execution Time: 15 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  for (int i = 0; i < N; i++) cin >> h[i];
  
  vector<int> dp(N + 1, 0);
  for (int i = 1; i < N; i++) dp[i + 1] = min(dp[i - 1] + h[i - 1], dp[i] + h[i - 1]);
  cout << dp[N] << endl;
}