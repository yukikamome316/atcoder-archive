/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc321/submissions/45834797
 * Submitted at: 2023-09-23 21:18:37
 * Problem URL: https://atcoder.jp/contests/abc321/tasks/abc321_b
 * Result: WA
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
  int N, X;
  cin >> N >> X;
  vector<int> A(N - 1);
  rep(i, N - 1) cin >> A[i];
  
  for (int i = 0; i <= 100; i++) {
    vector<int> tmp = A;
    tmp.insert(tmp.begin(), i);
    sort(tmp.begin(), tmp.end());
    int ans = 0;
    for (int j = 1; j < N - 1; j++) {
      ans += tmp[j];
    }
    if (ans == X) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
}