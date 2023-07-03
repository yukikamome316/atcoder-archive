/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/43214454
 * Submitted at: 2023-07-03 13:55:09
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_b
 * Result: WA
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  cout << (ll)ceil((double)H * W / 2) << endl;
}