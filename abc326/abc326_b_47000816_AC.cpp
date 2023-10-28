/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc326/submissions/47000816
 * Submitted at: 2023-10-28 21:06:17
 * Problem URL: https://atcoder.jp/contests/abc326/tasks/abc326_b
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
  for (int num = N; num <= 999; num++) {
    if ((num / 100) * ((num / 10) % 10) == num % 10) {
      cout << num << endl;
      return 0;
    }
  }
}