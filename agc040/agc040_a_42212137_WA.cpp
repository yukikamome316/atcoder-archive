/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/agc040/submissions/42212137
 * Submitted at: 2023-06-12 14:42:46
 * Problem URL: https://atcoder.jp/contests/agc040/tasks/agc040_a
 * Result: WA
 * Execution Time: 24 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  // 非負整数なので、とりあえず0で全て初期化しておく
  vector<int> a(S.size() + 1);
  rep(i, S.size()) {
    if (S[i] == '<') {
      a[i + 1] = a[i] + 1;
    }
  }

  for (int i = S.size(); i >= 1; i--) {
    if (S[i] == '>') {
      a[i] = max(a[i], a[i + 1] + 1);
    }
  }

  cout << accumulate(a.begin(), a.end(), 0) << endl;
}