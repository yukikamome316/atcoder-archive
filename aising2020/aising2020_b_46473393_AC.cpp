/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/aising2020/submissions/46473393
 * Submitted at: 2023-10-12 18:23:16
 * Problem URL: https://atcoder.jp/contests/aising2020/tasks/aising2020_b
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
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    if (x % 2 && (i + 1) % 2) cnt++;
  }
  cout << cnt << endl;
}
