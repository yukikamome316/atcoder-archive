/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc086/submissions/43252818
 * Submitted at: 2023-07-04 23:13:43
 * Problem URL: https://atcoder.jp/contests/abc086/tasks/abc086_b
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string a, b;
  cin >> a >> b;
  int num = stoi(a + b);
  for (int i = 1; i <= 1000; i++) {
    if (i * i == num) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}