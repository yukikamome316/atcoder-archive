/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/adt_all_20231026_2/submissions/46943701
 * Submitted at: 2023-10-26 18:37:14
 * Problem URL: https://atcoder.jp/contests/adt_all_20231026_2/tasks/abc293_a
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

  rep(i, (int)S.size() / 2) {
    swap(S[2 * i], S[2 * i + 1]);
  }

  cout << S << endl;
}