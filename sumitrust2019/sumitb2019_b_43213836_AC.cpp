/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/43213836
 * Submitted at: 2023-07-03 13:24:55
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  int result = N * 100 / 108;
  if (N * 100 % 108 != 0) {
    result++;
  }

  if (floor(result * 1.08) * 100 != N * 100) {
    cout << ":(" << endl;
  } else {
    cout << result << endl;
  }
 
}