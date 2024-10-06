/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/53961331
 * Submitted at: 2024-05-28 03:00:56
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_b
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size() - 3; i++){
    ans = max(ans, abs(stoi(s.substr(i, 3)) - 753));
  }
  cout << ans << endl;
}