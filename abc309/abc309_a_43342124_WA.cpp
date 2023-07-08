/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc309/submissions/43342124
 * Submitted at: 2023-07-08 21:04:29
 * Problem URL: https://atcoder.jp/contests/abc309/tasks/abc309_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int A, B;
  cin >> A >> B;
  if (B - A == 3 || (B - A == 1 && A % 3 != 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}