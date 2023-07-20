/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/43775543
 * Submitted at: 2023-07-20 18:36:36
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_a
 * Result: AC
 * Execution Time: 8 ms
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
  if (S == "ABC") {
    cout << "ARC" << endl;
  } else {
    cout << "ABC" << endl;
  }
}