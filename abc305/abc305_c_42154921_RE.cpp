/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42154921
 * Submitted at: 2023-06-10 22:09:36
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_c
 * Result: RE
 * Execution Time: 108 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> grid(H);
  rep(i, H)
    cin >> grid[i];


  pair<int, int> spos = {0, 0};
  rep(i, H) {
    bool found = false;
    rep(j, W) {
      if (grid[i][j] == '#') {
        spos = {i, j};
        found = true;
        break;
      }
    }
    if (found) break;
  }

  if (spos.second != 0 && grid[spos.first + 1][spos.second - 1] == '#') {
    cout << spos.first + 1 << " " << spos.second << endl;
    return 0;
  }
  
  int cookie_h = 0, cookie_w = 0;
  rep(i, H) {
    cookie_h = max(cookie_h, (int)count(grid[i].begin(), grid[i].end(), '#'));
  }

  rep(i, W) {
    int cnt = 0;
    rep(j, H) {
      if (grid[j][i] == '#')
        cnt++;
    }
    cookie_w = max(cookie_w, cnt);
  }

  pair<int, int> ans;
  for (int i = spos.first; i < spos.first + cookie_h - 1; i++) {
    for (int j = spos.second; j < spos.second + cookie_w - 1; j++) {
      if (grid[i][j] == '.') {
        ans = {i + 1, j + 1};
      }
    }
  }

  cout << ans.first << " " << ans.second << endl;
}