/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc324/submissions/46541825
 * Submitted at: 2023-10-14 21:19:38
 * Problem URL: https://atcoder.jp/contests/abc324/tasks/abc324_c
 * Result: RE
 * Execution Time: 2264 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int edit_distance_dp(string str1, string str2) {
    vector d(str1.size() + 1, vector<int>(str2.size() + 1));

    for (int i = 0; i < (int)str1.size() + 1; i++) d[i][0] = i;
    for (int i = 0; i < (int)str2.size() + 1; i++) d[0][i] = i;
    for (int i = 1; i < (int)str1.size() + 1; i++)
        for (int j = 1; j < (int)str2.size() + 1; j++)
            d[i][j] = min(min(d[i-1][j], d[i][j-1]) + 1, d[i-1][j-1] + (str1[i-1] == str2[j-1] ? 0 : 1));

    return d[str1.size()][str2.size()];
}

int main() {
  int N;
  cin >> N;
  string T;
  cin >> T;

  set<int> st;

  rep(i, N) {
    string S;
    cin >> S;
    if (edit_distance_dp(S, T) <= 1) st.insert(i + 1);
  }

  cout << st.size() << endl;
  for (int x : st) {
    cout << x << " ";
  }
  cout << endl;
}