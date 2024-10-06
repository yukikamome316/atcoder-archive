/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/53023893
 * Submitted at: 2024-05-02 19:19:06
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
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
  int h, w;
  cin >> h >> w;

  if (h == 1 || w == 1) {
    cout << 1 << endl;
    return 0;
  }
  cout << ((ll)h * w + 2 - 1) / 2 << endl;
}
