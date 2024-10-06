/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc337/submissions/49487883
 * Submitted at: 2024-01-20 21:53:54
 * Problem URL: https://atcoder.jp/contests/abc337/tasks/abc337_c
 * Result: AC
 * Execution Time: 256 ms
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
  map<int, int> mp;

  int s = -1;
  rep(i, N) {
    int A;
    cin >> A;
    if (A == -1) s = i + 1;
    mp[A] = i + 1;
  }

  int c = s;
  rep(i, N) {
    cout << c << " ";
    c = mp[c];
  }

  cout << endl;
}
