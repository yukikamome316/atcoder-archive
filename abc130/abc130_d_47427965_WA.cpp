/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc130/submissions/47427965
 * Submitted at: 2023-11-10 22:02:14
 * Problem URL: https://atcoder.jp/contests/abc130/tasks/abc130_d
 * Result: WA
 * Execution Time: 19 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(N);
  rep(i, N) cin >> a[i];
  
  vector<ll> s(N + 1);
  rep(i, N) s[i + 1] = s[i] + a[i];

  int right = 0;
  ll ans = 0;

  rep(left, N) {
    while (right < N && s[right] - s[left] < K) {
      right++;
    }

    if (s[right] - s[left] >= K) ans += N - (right - 1);
    
    if (left == right) right++;
  }

  cout << ans << endl;
}