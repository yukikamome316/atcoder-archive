/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc022/submissions/42227497
 * Submitted at: 2023-06-13 09:54:42
 * Problem URL: https://atcoder.jp/contests/abc022/tasks/abc022_b
 * Result: WA
 * Execution Time: 55 ms
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
  rep(i, N)
    cin >> A[i];

  map<int, int> mp;
  rep(i, N)
    mp[A[i]]++;

  int cnt = 0;
  rep(i, (1ll << 10) + 1) {
    if (mp.count(i) == 0) continue;
    if (mp[i] >= 2) 
      cnt += mp[i] - 1;
  }

  cout << cnt << endl;
} 
