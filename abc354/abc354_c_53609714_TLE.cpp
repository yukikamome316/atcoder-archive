/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53609714
 * Submitted at: 2024-05-18 21:33:31
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_c
 * Result: TLE
 * Execution Time: 2208 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n), c(n);
  rep(i, n) {
    int a_tmp, c_tmp;
    cin >> a_tmp >> c_tmp;
    a[i] = make_pair(a_tmp, i);
    c[i] = make_pair(c_tmp, i);
  }

  set<int> erased;

  vector<pair<int, int>> a_sorted(a.begin(), a.end()), c_sorted(c.begin(), c.end());
  sort(a_sorted.begin(), a_sorted.end());
  sort(c_sorted.begin(), c_sorted.end());

  rep(i, n) {
    set<int> s;
    int idx = lower_bound(a_sorted.begin(), a_sorted.end(), a[i]) - a_sorted.begin();
    if (idx > 0) {
      for (int j = 0; j < idx; j++) {
        s.insert(a_sorted[j].second);
      }
    }
    idx = upper_bound(c_sorted.begin(), c_sorted.end(), c[i]) - c_sorted.begin();
    if (idx < n) {
      for (int j = idx; j < n; j++) {
        if (s.find(c_sorted[j].second) != s.end()) {
          erased.insert(c_sorted[j].second);
        }
      }
    }
  }

  cout << n - erased.size() << endl;

  rep(i, n) {
    if (erased.find(i) == erased.end()) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;
}
