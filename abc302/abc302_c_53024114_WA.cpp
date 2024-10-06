/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/53024114
 * Submitted at: 2024-05-02 19:29:05
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_c
 * Result: WA
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  do {
    bool all_one_hdist = true;
    rep(i, n - 1) {
      int hdist = 0;
      rep(j, m) {
        if (s[i][j] != s[i + 1][j]) hdist++;
      }
      if (hdist > 1) {
        all_one_hdist = false;
        break;
      }
    }

    if (all_one_hdist) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(s.begin(), s.end()));
  
  cout << "No" << endl;
}
