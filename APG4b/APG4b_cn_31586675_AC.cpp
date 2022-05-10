/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31586675
 * Submitted at: 2022-05-10 19:05:06
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cn
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;
  int result_2 = x * (a + b);
  cout << result_2 << endl;
  int result_3 = result_2 * result_2;
  cout << result_3 << endl;
  cout << result_3 - 1 << endl;

  // ここにプログラムを追記
}
