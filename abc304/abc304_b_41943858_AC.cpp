/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41943858
 * Submitted at: 2023-06-03 21:13:25
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    if (N <= pow(10, 3) - 1) {
      cout << N << endl;
      return 0;
    }

    rep(i, 6) {
      if (N >= pow(10, i + 3) && N <= pow(10, i + 4) - 1) {
        cout << N - (N % (int)pow(10, i + 1)) << endl;
        return 0;
      }
    }
}