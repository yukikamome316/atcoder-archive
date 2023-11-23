/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc168/submissions/47850398
 * Submitted at: 2023-11-23 22:24:26
 * Problem URL: https://atcoder.jp/contests/arc168/tasks/arc168_b
 * Result: AC
 * Execution Time: 186 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  
  map<int, int> cnt;

  for(auto e : A) 
    cnt[e] ^= 1;
  
  int ans = -1, grundy = 0;
  for (auto [k, v] : cnt) {
    if (v) {
      chmax(ans, k);
      grundy ^= k;
    }
  }

  if (grundy) cout << -1 << endl;
  else if (ans == -1) cout << 0 << endl;
  else cout << ans - 1 << endl;
}
