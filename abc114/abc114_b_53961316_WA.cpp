/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/53961316
 * Submitted at: 2024-05-28 02:58:52
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
  for (int i = 0; i < s.size() - 2; i++){
    ans = max(ans, abs(stoi(s.substr(i, 3)) - 753));
  }
  cout << ans << endl;
}