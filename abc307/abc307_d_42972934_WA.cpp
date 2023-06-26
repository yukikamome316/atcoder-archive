/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42972934
 * Submitted at: 2023-06-26 13:38:07
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: WA
 * Execution Time: 14 ms
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
  
  string T = "";
  deque<int> idx;
  rep(i, N) {
    if (S[i] != '(' && S[i] != ')') {
      T += S[i];
    } else if (S[i] == '(') {
      T += S[i];
      idx.push_back(i);
    } else if (S[i] == ')') {
      if (!idx.empty()) {
        int x = idx.back();
        idx.pop_back();
        T.erase(T.begin() + x, T.end());
      } else {
        T += S[i];
      }
    }
  }

  cout << T << endl;
}