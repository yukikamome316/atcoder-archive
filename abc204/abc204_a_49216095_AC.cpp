/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc204/submissions/49216095
 * Submitted at: 2024-01-11 18:54:06
 * Problem URL: https://atcoder.jp/contests/abc204/tasks/abc204_a
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
  int x, y;
  cin >> x >> y;
  if (x == y) {
    cout << x << endl;
    return 0;
  }

  set<int> st = {0, 1, 2};
  st.erase(x);
  st.erase(y);
  cout << *st.begin() << endl;
}
