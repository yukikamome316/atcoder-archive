/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/44579566
 * Submitted at: 2023-08-14 13:14:44
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_b
 * Result: AC
 * Execution Time: 190 ms
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
  vector a(N, vector<int>());
  set<vector<int>> st;
  rep(i, N) {
    int L;
    cin >> L;

    rep(j, L) {
      int tmp;
      cin >> tmp;
      a[i].push_back(tmp);
    }
  }

  rep(i, N) {
    st.insert(a[i]);
  }

  cout << st.size() << endl;
}