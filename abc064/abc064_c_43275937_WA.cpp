/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/43275937
 * Submitted at: 2023-07-05 22:51:18
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_c
 * Result: WA
 * Execution Time: 8 ms
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
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  vector<int> color(9);
  int variable_cnt = 0;
  rep(i, N) {
    if (a[i] >= 3200) {
      variable_cnt++;
      color[8]++;
    }

    rep(j, 8) {
      if (a[i] >= 400 * j && a[i] < 400 * (j + 1)) {
        color[j]++;
      }
    }
  }

  int color_kind = 0;
  rep(i, 7) {
    if (color[i] > 0) color_kind++;
  }

  bool red_exists = false;

  if (color[7] > 0 || color[8] > 0) {
    color_kind++;
    red_exists = true;
  }

  if (color_kind > 0 && variable_cnt > 0) {
    if (color[7] > 0) {
      cout << color_kind << " " << endl;
    } else {
      cout << color_kind - 1 << " " << endl;
    }
  } else {
    cout << color_kind << " " << endl;
  }

  cout << color_kind + variable_cnt << endl;

}