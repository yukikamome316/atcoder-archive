/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/54691596
 * Submitted at: 2024-06-18 19:10:44
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_b
 * Result: AC
 * Execution Time: 60 ms
 */

#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  set<set<int>> e;
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    e.insert({u, v});
  }

  ll cnt = 0;
  for (int a = 1; a <= n; a++) {
    for (int b = a + 1; b <= n; b++) {
      for (int c = b + 1; c <= n; c++) {
        set<int> buf1 = {a, b};
        set<int> buf2 = {b, c};
        set<int> buf3 = {c, a};
        
        if (e.contains(buf1) && e.contains(buf2) && e.contains(buf3)) {
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;
}
