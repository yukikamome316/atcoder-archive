/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/43203853
 * Submitted at: 2023-07-03 00:02:22
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  string s = "...";
  rep(i, M) {
    int x, y;
    cin >> x >> y;
    if (s[x - 1] != '.' && s[x - 1] != y + '0') {
      cout << -1 << endl;
      return 0;
    }
    s[x - 1] = y + '0';
  }

  if (s[0] == '0' && N == 3) {
    cout << -1 << endl;
    return 0;
  }

  if (s[0] == '.') {
    s[0] = '1';
  }

  rep(i, N) {
    if (s[i] == '.') {
      s[i] = '0';
    }
  }

  cout << stoi(s) << endl;
}