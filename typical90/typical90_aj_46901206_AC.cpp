/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/46901206
 * Submitted at: 2023-10-24 19:46:56
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_aj
 * Result: AC
 * Execution Time: 178 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<pair<ll, ll>> data(N);
  vector<ll> z(N), w(N);

  rep(i, N) {
    ll x, y;
    cin >> x >> y;
    data[i] = {x, y};
    z[i] = x + y;
    w[i] = x - y;
  }

  ll min_z = *min_element(z.begin(), z.end());
  ll max_z = *max_element(z.begin(), z.end());

  ll min_w = *min_element(w.begin(), w.end());
  ll max_w = *max_element(w.begin(), w.end());

  rep(i, Q) {
    int idx;
    cin >> idx;
    idx--;
    cout << max({z[idx] - min_z, w[idx] - min_w, max_z - z[idx], max_w - w[idx]}) << endl;
  }
}