/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42975014
 * Submitted at: 2023-06-26 15:13:57
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: AC
 * Execution Time: 15 ms
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

  int dep = 0;
  string T = "";
  rep(i, N) {
    char c = S[i];
    if (dep > 0 && c == ')') {
      while (T.back() != '(') {
        T.pop_back();
      }
      T.pop_back();
      dep--;
    } else {
      T += c;
      if (c == '(') {
        dep++;
      }
    }
  }
  
  cout << T << endl;
}