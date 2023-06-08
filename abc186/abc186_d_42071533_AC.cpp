/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/42071533
 * Submitted at: 2023-06-08 14:22:38
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_d
 * Result: AC
 * Execution Time: 79 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());

  vector<ll> s(N + 1, 0);
  rep(i, N)
    s[i + 1] = s[i] + A[i];

  ll sum = 0;
  rep(i, N)
    sum += i * A[i] - s[i];

  cout << sum << endl;
}