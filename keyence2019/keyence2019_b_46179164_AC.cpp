/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/46179164
 * Submitted at: 2023-10-03 14:49:47
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_b
 * Result: AC
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  string S;
  cin >> S;
  
  for (int i = 0; i < S.size(); i++) {
    for (int j = 0; j < S.size() - i; j++) {
      string S_sub = S.substr(0, i) + S.substr(i + j);
      if (S_sub == "keyence") {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
}