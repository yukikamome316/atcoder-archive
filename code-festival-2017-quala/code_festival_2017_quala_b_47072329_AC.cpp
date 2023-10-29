/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/code-festival-2017-quala/submissions/47072329
 * Submitted at: 2023-10-29 22:46:34
 * Problem URL: https://atcoder.jp/contests/code-festival-2017-quala/tasks/code_festival_2017_quala_b
 * Result: AC
 * Execution Time: 2 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  
  for (int i = 0; i <= M; i++) {
    for (int j = 0; j <= N; j++) {
      if (i * N + j * M - 2 * i * j == K) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
