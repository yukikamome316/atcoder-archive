/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53597597
 * Submitted at: 2024-05-18 21:13:43
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_b
 * Result: AC
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
  int n;
  cin >> n;
  vector<string> name(n);

  int t = 0;
  rep(i, n) {
    string s;
    int c;
    cin >> s >> c;
    name[i] = s;
    t += c;
  }

  t %= n;
  
  sort(name.begin(), name.end());
  cout << name[t] << endl;
}
