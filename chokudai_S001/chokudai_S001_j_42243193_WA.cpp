/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/42243193
 * Submitted at: 2023-06-14 00:32:59
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: WA
 * Execution Time: 34 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N)
    cin >> A[i];

  // vector<int> B(2 * N);
  // rep(i, 2 * N)
  //   B[i] = A[i % N];

  int max_a = *max_element(A.begin(), A.end());
  fenwick_tree<int> fw(max_a + 1);
  int inv = 0;
  rep(i, N) {
    inv += i - fw.sum(0, A[i]);
    fw.add(A[i], 1);
  }

  cout << inv << endl;

}