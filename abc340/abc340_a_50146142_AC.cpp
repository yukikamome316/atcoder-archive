/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc340/submissions/50146142
 * Submitted at: 2024-02-10 21:04:23
 * Problem URL: https://atcoder.jp/contests/abc340/tasks/abc340_a
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
  int A, B, D;
  cin >> A >> B >> D;
  cout << A << " ";
  if (A == B) {
    return 0;
  }
  while (A != B) {
    A += D;
    cout << A << " ";
  } 
}
