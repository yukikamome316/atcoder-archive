/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/42071156
 * Submitted at: 2023-06-08 14:03:10
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_d
 * Result: WA
 * Execution Time: 78 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());

  ll sum = 0;
  rep2(i, 1, N) {
    sum += i * A[i];
  }

  rep(i, N) {
    sum -= (N - i - 1) * A[i];
  }

  cout << sum << endl;
}