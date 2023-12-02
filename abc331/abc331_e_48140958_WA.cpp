/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc331/submissions/48140958
 * Submitted at: 2023-12-02 22:27:23
 * Problem URL: https://atcoder.jp/contests/abc331/tasks/abc331_e
 * Result: WA
 * Execution Time: 120 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M, L;
  cin >> N >> M >> L;
  vector<pair<int, int>> a(N), b(M);
  rep(i, N) {
    int a_tmp;
    cin >> a_tmp;
    a[i] = make_pair(a_tmp, i);
  }

  rep(i, M) {
    int b_tmp;
    cin >> b_tmp;
    b[i] = make_pair(b_tmp, i);
  }

  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  set<pair<int, int>> ex;
  rep(i, L) {
    int c, d;
    cin >> c >> d;
    c--; d--;
    ex.insert({c, d});
  }

  int ans = 0;
  int idx_a = 0, idx_b = 0;
  while (idx_a < N && idx_b < M) {
    if (ex.contains({a[idx_a].second, b[idx_b].second})) {
      if (a[idx_a].first <= b[idx_b].first) {
        idx_b++;
      } else {
        idx_a++;
      }
      continue;
    }
    ans = a[idx_a].first + b[idx_b].first;
    break;
  }

  idx_a = 0, idx_b = 0;

  while (idx_a < N && idx_b < M) {
    if (ex.contains({a[idx_a].second, b[idx_b].second})) {
      if (a[idx_a].first > b[idx_b].first) {
        idx_b++;
      } else {
        idx_a++;
      }
      continue;
    }

    chmax(ans, a[idx_a].first + b[idx_b].first);
    break;
  }

  cout << ans << endl;
}
