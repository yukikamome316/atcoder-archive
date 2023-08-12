/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc314/submissions/44491323
 * Submitted at: 2023-08-12 21:03:04
 * Problem URL: https://atcoder.jp/contests/abc314/tasks/abc314_a
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
  string S = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  int N;
  cin >> N;

  cout << "3.";
  rep(i, N) {
    cout << S[i];
  }
  cout << endl;
}