/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc063/submissions/46210230
 * Submitted at: 2023-10-04 18:35:42
 * Problem URL: https://atcoder.jp/contests/abc063/tasks/arc075_a
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

int main() {
  int N;
  cin >> N;
  vector<int> s(N);
  rep(i, N) cin >> s[i];

  sort(s.rbegin(), s.rend());

  int ans = 0;
  for (int i = N; i >= 0; i--) {
    int tmp = accumulate(s.begin(), s.begin() + i, 0);
    if (tmp % 10 != 0) {
      ans = tmp;
      break;
    }
  }

  cout << ans << endl;
}