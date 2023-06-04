/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/41994441
 * Submitted at: 2023-06-04 16:28:44
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;


  rep2(i, 0, 20) {
    int cnt = A + (A - 1) * i;
    if (cnt >= B) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}