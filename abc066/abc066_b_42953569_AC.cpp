/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/42953569
 * Submitted at: 2023-06-25 17:40:11
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/abc066_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  for (int i = 1; i < S.size(); i++) {
    if ((S.size() - i) % 2 != 0) continue;

    string substr = "";
    rep(j, (S.size() - i) / 2) {
      substr += S[j];
    }
    
    bool ok = true;
    rep(j, (S.size() - i) / 2) {
      if (substr[j] != S[j + (S.size() - i) / 2]) {
        ok = false;
      }
    }
    if (ok) {
      cout << S.size() - i << endl;
      return 0;
    }
  }
}