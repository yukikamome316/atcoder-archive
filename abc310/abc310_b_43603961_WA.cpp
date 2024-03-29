/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc310/submissions/43603961
 * Submitted at: 2023-07-15 21:29:45
 * Problem URL: https://atcoder.jp/contests/abc310/tasks/abc310_b
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
  int N, M;
  cin >> N >> M;
  vector<int> P(N);
  vector<vector<int>> F(N);
  rep(i, N) {
    int P_tmp, C;
    cin >> P[i] >> C;
    rep(j, C) {
      int F_tmp;
      cin >> F_tmp;
      F[i].push_back(F_tmp);
    } 
  }

  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;

      if (P[i] >= P[j]) {
        bool has_all_impl = true;
        for (int f1 : F[i]) {
          bool has_element = false;
          for (int f2 : F[j]) {
            if (f1 == f2) has_element = true;
          }
          if (!has_element) {
            has_all_impl = false;
            break;
          }
        }
        
        if (!has_all_impl) continue;

        bool has_exclueded_e = false;
        for (int f1 : F[j]) {
          for (int f2 : F[i]) {
            if (f1 != f2) has_exclueded_e = true;
          }
        }

        if (P[i] > P[j] || has_exclueded_e) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}