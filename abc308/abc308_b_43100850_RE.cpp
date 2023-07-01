/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43100850
 * Submitted at: 2023-07-01 21:11:34
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_b
 * Result: RE
 * Execution Time: 116 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> C(N);
  rep(i, N)
    cin >> C[i];
  vector<string> D(M);
  rep(i, M)
    cin >> D[i];
  vector<int> P(M);
  rep(i, M + 1)
    cin >> P[i];
  
  map<string, int> price;
  rep(i, M) {
    price[D[i]] = P[i + 1];
  }

  ll sum = 0;
  rep(i, N) {
    int p = price[C[i]];
    sum += (p != 0 ? p : P[0]);
  }

  cout << sum << endl;
}