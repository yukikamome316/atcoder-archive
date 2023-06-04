/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/41998532
 * Submitted at: 2023-06-04 19:28:34
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/abc065_b
 * Result: AC
 * Execution Time: 35 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> a(N + 1);
  rep2(i, 1, N + 1) cin >> a[i];

  int current = 1;
  int cnt = 0;
  rep(i, 1000000) {
    current = a[current];
    cnt++;
    if (current == 2) {
      cout << cnt << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}