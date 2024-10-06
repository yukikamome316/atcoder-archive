/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc333/submissions/48549599
 * Submitted at: 2023-12-16 21:12:37
 * Problem URL: https://atcoder.jp/contests/abc333/tasks/abc333_b
 * Result: WA
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
  char S1, S2, T1, T2;
  cin >> S1 >> S2 >> T1 >> T2;

  S1 -= 'A';
  S2 -= 'A';
  T1 -= 'A';
  T2 -= 'A';

  if (S1 < S2) swap(S1, S2);
  if (T1 < T2) swap(T1, T2);

  if ((S1 + 1) % 5 == S2 && (T1 + 1) % 5 == T2) cout << "Yes" << endl;
  else if ((S1 + 1) % 5 != S2 && (T1 + 1) % 5 != T2) cout << "Yes" << endl;
  else cout << "No" << endl;
}
