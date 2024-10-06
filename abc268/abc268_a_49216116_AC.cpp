/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc268/submissions/49216116
 * Submitted at: 2024-01-11 18:55:15
 * Problem URL: https://atcoder.jp/contests/abc268/tasks/abc268_a
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
  set<int> st;
  rep(i, 5) {
    int x;
    cin >> x;
    st.insert(x);
  }

  cout << st.size() << endl;
}