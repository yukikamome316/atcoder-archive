/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc305/submissions/42133339
 * Submitted at: 2023-06-10 21:13:51
 * Problem URL: https://atcoder.jp/contests/abc305/tasks/abc305_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  vector<int> dist = {3, 1, 4, 1, 5, 9, 0};
  char p, q;
  cin >> p >> q;

  int result = 0;

  if (p == q) {
    result = 0;
  } else if (p < q) {
    rep2(i, p - 'A', q - 'A') {
      result += dist[i];
    }
  } else {
    rep2(i, q - 'A', p - 'A') {
      result += dist[i];
    }
  }

  cout << result << endl;
}