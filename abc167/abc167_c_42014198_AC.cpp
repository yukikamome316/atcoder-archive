/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc167/submissions/42014198
 * Submitted at: 2023-06-05 15:17:51
 * Problem URL: https://atcoder.jp/contests/abc167/tasks/abc167_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector A(N, vector<int>(M));

  rep(i, N) {
    cin >> C[i];
    rep(j, M) {
      cin >> A[i][j];
    }    
  }
  
  int min_price = INT_MAX;
  for (int bits = 1; bits < (1 << N); bits++) {
    vector<int> sum(M);
    int price = 0;
    for (int i = 0; i < N; i++) {
      if (bits & (1 << i)) {
        for (int j = 0; j < M; j++) {
          sum[j] += A[i][j];
        }
        price += C[i];
      }
    }
    bool ok = true;
    rep(i, M) {
      if (sum[i] < X) ok = false;
    }
    if (ok) {
      min_price = min(min_price, price);
    }
  }

  cout << (min_price != INT_MAX ? min_price : -1) << endl;
}