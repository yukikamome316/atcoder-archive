/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc337/submissions/49458886
 * Submitted at: 2024-01-20 21:18:14
 * Problem URL: https://atcoder.jp/contests/abc337/tasks/abc337_b
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  string str;
  cin >> str;
  // ランレングス圧縮
  vector<pair<char, int>> rle;
  rle.push_back({str[0], 0});
  for (int i = 0; i < str.size(); i++) {
    if (rle.back().first == str[i]) {
          rle.back().second++;
      } else {
          rle.push_back({str[i], 1});
      }
  }

  bool isAiBjCk = true;
  for (int i = 0; i < rle.size(); i++) {
    if (rle[i].first != 'A' + i) {
      isAiBjCk = false;
      break;
    }
  }

  if (isAiBjCk) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
