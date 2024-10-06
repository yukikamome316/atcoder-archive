/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/53023042
 * Submitted at: 2024-05-02 18:42:50
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_a
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>

using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int cnt_t = 0, cnt_a = 0;
  bool is_aoki_faster = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'T') {
      cnt_t++;
      if (cnt_t != cnt_a) is_aoki_faster = false;
    } else if (s[i] == 'A') {
      cnt_a++;
      if (cnt_t != cnt_a) is_aoki_faster = true;
    }
  }
  
  if (cnt_t == cnt_a) cout << (is_aoki_faster ? 'A' : 'T') << endl;
  else cout << (cnt_a > cnt_t ? 'A' : 'T') << endl;
}