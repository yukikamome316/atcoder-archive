/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc324/submissions/46522300
 * Submitted at: 2023-10-14 21:01:31
 * Problem URL: https://atcoder.jp/contests/abc324/tasks/abc324_a
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
  int N;
  cin >> N;
  int tmp; cin >> tmp;
  rep(i, N - 1) {
    int x;
    cin >> x;
    if (tmp != x) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}