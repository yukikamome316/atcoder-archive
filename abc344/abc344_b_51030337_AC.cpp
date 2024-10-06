/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc344/submissions/51030337
 * Submitted at: 2024-03-09 21:04:53
 * Problem URL: https://atcoder.jp/contests/abc344/tasks/abc344_b
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
  vector<int> A;
  int ai;
  while (cin >> ai) {
    A.push_back(ai);
  }
  
  reverse(A.begin(), A.end());
  rep(i, A.size()) {
    cout << A[i] << endl;
  }
}