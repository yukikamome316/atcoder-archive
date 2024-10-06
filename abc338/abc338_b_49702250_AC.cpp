/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc338/submissions/49702250
 * Submitted at: 2024-01-27 21:08:06
 * Problem URL: https://atcoder.jp/contests/abc338/tasks/abc338_b
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
  vector<int> cnt(30);
  rep(i, S.size()) {
    cnt.at(S.at(i) - 'a')++;
  }

  cout << (char)((char)(max_element(cnt.begin(), cnt.end()) - cnt.begin()) + 'a') << endl;
}
