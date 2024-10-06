/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/49216764
 * Submitted at: 2024-01-11 19:38:30
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<pair<int, int>> primef(int n) {
  vector<pair<int, int>> r;
  for (int i = 2; i * i <= n; i++) {
    if (n % i) continue;

    int e = 0;
    while (n % i == 0) {
        e++;
        n /= i;
    }
    r.push_back({i, e});
  }
  if (n != 1) r.push_back({n, 1});
  return r;
}

int main() {
  ll K;
  cin >> K;
  auto kp = primef(K);
  
  if (kp.size() == 1) {
    cout << K << endl;
    return 0;
  }
  
  map<int, int> cnt;
  rep2(i, 2, 18) {
    auto ip = primef(i);
    for (auto p : ip) cnt[p.first] += p.second;

    bool ok = true;
    for (auto p : kp) {
      if (!cnt.contains(p.first) || cnt[p.first] < p.second) ok = false;
    }
    
    if (ok) {
      cout << i << endl;
      return 0;
    }
  }
}
