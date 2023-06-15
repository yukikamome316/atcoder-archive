/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/42278932
 * Submitted at: 2023-06-15 22:32:42
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  for (int c = 1; c < N; c++) {
    for (int a = 1; a <= sqrt(N - c); a++) {
      if ((N - c) % a != 0) continue;
      if (a * a == N - c) cnt++;
      else cnt += 2;
    }
  }

  cout << cnt << endl;
}