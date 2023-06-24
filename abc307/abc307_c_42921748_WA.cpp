/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42921748
 * Submitted at: 2023-06-24 22:11:53
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_c
 * Result: WA
 * Execution Time: 496 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int ha, wa;
  cin >> ha >> wa;
  vector<string> a(ha);
  rep(i, ha)
    cin >> a[i];

  int hb, wb;
  cin >> hb >> wb;
  vector<string> b(hb);
  rep(i, hb)
    cin >> b[i];

  int hx, wx;
  cin >> hx >> wx;
  vector<string> x(hx);
  rep(i, hx)
    cin >> x[i];

  int max_h = max(ha + hb - 1, hx), max_w = max(wa + wb - 1, wx);

  for (int i = 0; i <= max_h - ha; i++) {
    for (int j = 0; j <= max_w - wa; j++) {
      for (int k = 0; k <= max_h - hb; k++) {
        for (int l = 0; l <= max_w - wb; l++) {
          string tmp = "";
          rep(i, max_w)
            tmp += '.';
          vector<string> grid(max_h, tmp);

          rep(m, ha) rep(n, wa) {
            if (grid[m + i][n + j] == '.')
              grid[m + i][n + j] = a[m][n];
          }
          rep(m, hb) rep(n, wb) {
            if (grid[m + k][n + l] == '.')
              grid[m + k][n + l] = b[m][n];
          }

          for (int m = 0; m <= max_h - hx; m++) {
            for (int n = 0; n <= max_w - wx; n++) {
              bool ok = true;
              rep(o, hx) rep(p, wx) {
                if (grid[m + o][n + p] != x[o][p])
                  ok = false;
              }
              int black_h_idx = 0, black_w_idx = 0;
              rep(o, max_h) rep(p, max_w) {
                if (grid[o][p] == '#') {
                  black_h_idx = max(black_h_idx, o);
                  black_w_idx = max(black_w_idx, p);
                }
              }
              if (hx >= black_h_idx + 1 && wx >= black_w_idx + 1&& ok) {
                cout << "Yes" << endl;
                return 0;
              }
            }
          }
        }
      }
    }
  }

  cout << "No" << endl;
}