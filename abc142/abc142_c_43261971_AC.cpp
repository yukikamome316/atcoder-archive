/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc142/submissions/43261971
 * Submitted at: 2023-07-05 12:17:07
 * Problem URL: https://atcoder.jp/contests/abc142/tasks/abc142_c
 * Result: AC
 * Execution Time: 78 ms
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
  map<int, int> data;
  rep(i, N) {
    int d;
    cin >> d;
    data[d] = i + 1;
  }

  rep(i, N) {
    cout << data[i + 1] << " ";
  }

  cout << endl;
}