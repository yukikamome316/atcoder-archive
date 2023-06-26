/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42973801
 * Submitted at: 2023-06-26 14:18:35
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: WA
 * Execution Time: 16 ms
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
  string T = "";
  rep(i, N) {
    if (S[i] != '(' && S[i] != ')') {
      T += S[i];
    } else if (S[i] == '(') {
      T += S[i];
      dep++;
      start_idx[dep] = i;
    } else if (S[i] == ')') {
      if (start_idx[dep] < 0) {
        T += S[i];
        continue;
      }
      T.erase(T.begin() + start_idx[dep], T.end());
    
      start_idx[dep] = -1;
      dep--;
      if (dep < 0) {
        dep = 0;
      }
    }
  }

  cout << T << endl;
}