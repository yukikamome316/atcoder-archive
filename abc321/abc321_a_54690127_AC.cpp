/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc321/submissions/54690127
 * Submitted at: 2024-06-18 18:14:03
 * Problem URL: https://atcoder.jp/contests/abc321/tasks/abc321_a
 * Result: AC
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ok = true;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] <= s[i + 1]) ok = false;
  }
  cout << (ok ? "Yes" : "No") << endl;
}