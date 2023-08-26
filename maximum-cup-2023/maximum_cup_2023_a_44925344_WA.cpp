/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/maximum-cup-2023/submissions/44925344
 * Submitted at: 2023-08-26 13:12:05
 * Problem URL: https://atcoder.jp/contests/maximum-cup-2023/tasks/maximum_cup_2023_a
 * Result: WA
 * Execution Time: 135 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int N;
  cin >> N;
  map<int, int> mp;
  rep(i, N) {
    int x;
    cin >> x;
    mp[x]++;
  }

  ll cnt = 0;
  for (auto [key, val] : mp) {
    cnt += val * (val - 1) / 2;
  }

  cout << cnt << endl;
}