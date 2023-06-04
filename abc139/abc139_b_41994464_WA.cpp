/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/41994464
 * Submitted at: 2023-06-04 16:29:36
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int i = 0;
  while (true) {
    int cnt = A + (A - 1) * i;
    if (cnt >= B) {
      cout << i + 1 << endl;
      return 0;
    }
    i++;
  }
}