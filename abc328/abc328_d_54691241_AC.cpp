/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc328/submissions/54691241
 * Submitted at: 2024-06-18 18:53:51
 * Problem URL: https://atcoder.jp/contests/abc328/tasks/abc328_d
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  string s;
  cin >> s;

  stack<char> st;
  for (char c : s) {
    st.push(c);
    if (st.size() >= 3) {
      string t;
      t += st.top(); st.pop();
      t += st.top(); st.pop();
      t += st.top(); st.pop();
      if (t == "CBA") {
        continue;
      } else {
        reverse(t.begin(), t.end());
        for (char c : t) st.push(c);
      }
    }
  }

  string ans = "";

  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
