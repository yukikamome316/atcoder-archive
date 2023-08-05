/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc313/submissions/44288365
 * Submitted at: 2023-08-05 21:51:45
 * Problem URL: https://atcoder.jp/contests/abc313/tasks/abc313_b
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<bool>> mightier(N, vector<bool>(N, false));
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--, B--;
    mightier[A][B] = true;
  }

  rep(i, N) {
    rep2(j, i, N) {
      rep2(k, j, N) {
        if (mightier[i][j] && mightier[j][k])
          mightier[i][k] = true;
      }
    }
  }

  set<int> st;
  rep(i, N) {
    bool ok = true;
    rep(j, N) {
      if (i == j) continue;
      if (!mightier[i][j]) ok = false;
    }

    if (ok) {
      st.insert(i);
    }
  }

  cout << (st.size() == 1 ? *st.begin() + 1 : -1) << endl;
}