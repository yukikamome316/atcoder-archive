/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/43203378
 * Submitted at: 2023-07-02 23:46:30
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> c(N + 1, -1);

  rep(i, M) {
    int s, x;
    cin >> s >> x;
    if (c[s] != -1 && c[s] != x) {
      cout << -1 << endl;
      return 0;
    }

    c[s] = x;
  }

  string s = "000";
  rep(i, N) {
    if (c[i + 1] == -1) continue;
    s[i] = c[i + 1] + '0';
  }

  int ans = stoi(s);
  
  int tmp = ans;
  int digit = 0;
  while (tmp) {
    tmp /= 10;
    digit++;
  }

  if (digit != N) {
    ans = -1;
  }

  cout << ans << endl;
}