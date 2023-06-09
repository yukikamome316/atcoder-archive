/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc121/submissions/43213940
 * Submitted at: 2023-07-03 13:31:03
 * Problem URL: https://atcoder.jp/contests/abc121/tasks/abc121_b
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> B(M);
  rep(i, M) {
    cin >> B[i];
  }

  int cnt = 0;
  rep(i, N) {
    int sum = C;
    rep(j, M) {
      int A;
      cin >> A;
      sum += A * B[j];
    }
    if (sum > 0) {
      cnt++;
    }
  }

  cout << cnt << endl;
}