/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43146813
 * Submitted at: 2023-07-01 22:32:41
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: WA
 * Execution Time: 158 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

bool compare(const pair<double, int>& a, const pair<double, int>& b) {
  int intA = a.first * 1000000;  // 10^6倍して整数に変換
  int intB = b.first * 1000000;
  if (intA != intB) {
    return intA > intB;
  }
  return a.second < b.second;
}

int main() {
  int N;
  cin >> N;
  vector<pair<ll, ll>> data(N);
  rep(i, N) {
    ll A, B;
    cin >> A >> B;
    data[i] = {A, B};
  }

  vector<pair<double, int>> score(N);
  rep(i, N) {
    score[i] = {(double)data[i].first / (data[i].first + data[i].second), i};
  }

  sort(score.begin(), score.end(), compare);

  rep(i, N) {
    cout << score[i].second + 1 << " ";
  }

  cout << endl;
}