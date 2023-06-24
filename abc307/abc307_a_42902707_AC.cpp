/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42902707
 * Submitted at: 2023-06-24 21:13:56
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  rep(i, N) {
    int sum = 0;
    rep(j, 7) {
      int tmp;
      cin >> tmp;
      sum += tmp;
    }
    cout << sum << " ";
  }
  cout << endl;

}