/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc310/submissions/43638608
 * Submitted at: 2023-07-15 22:30:31
 * Problem URL: https://atcoder.jp/contests/abc310/tasks/abc310_c
 * Result: WA
 * Execution Time: 53 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  set<string> S;
  rep(i, N) {
    string tmp;
    cin >> tmp;
    S.insert(tmp);
  }

  for (string e : S) {
    reverse(e.begin(), e.end());
    if (e.size() != 1) S.erase(e);
  }

  cout << S.size() << endl;
}