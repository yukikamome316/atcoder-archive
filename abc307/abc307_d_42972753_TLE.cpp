/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42972753
 * Submitted at: 2023-06-26 13:25:13
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> start_idx(N, -1);
  int dep = 0;
  rep(i, N) {
    if (S[i] == '(') {
      dep++;
      start_idx[dep] = i;
    } else if (S[i] == ')') {
      if (start_idx[dep] < 0) continue;
      for (int j = start_idx[dep]; j <= i; j++) {
        S[j] = '.';
      }
      dep--;
      if (dep < 0) {
        dep = 0;
      }
    }
  }

  string ans = "";
  rep(i, N) {
    if (S[i] != '.') {
      ans += S[i];
    }
  }

  cout << ans << endl;
}