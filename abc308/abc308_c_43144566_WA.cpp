/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43144566
 * Submitted at: 2023-07-01 22:27:31
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: WA
 * Execution Time: 149 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

bool compare(const pair<ll, int>& a, const pair<ll, int>& b) {
  if (a.first != b.first) {
      return a.first > b.first;  // 高い順
  }
  return a.second < b.second;  // インデックスの昇順
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

  vector<pair<ll, int>> score(N);
  rep(i, N) {
    score[i] = {10e10 * data[i].first / (data[i].first + data[i].second), i};
  }

  sort(score.begin(), score.end(), compare);

  rep(i, N) {
    cout << score[i].second + 1 << " ";
  }

  cout << endl;
}