/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc162/submissions/42730017
 * Submitted at: 2023-06-18 23:49:31
 * Problem URL: https://atcoder.jp/contests/arc162/tasks/arc162_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    
    int cnt = 0;
    rep(i, n) {
      bool ok = true;
      rep2(j, i + 1, n) {
        if (p[i] > p[j]) ok = false;
      }
      if (ok) cnt++;
    }
    cout << cnt << endl;
  }
}