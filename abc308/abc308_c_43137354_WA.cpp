/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43137354
 * Submitted at: 2023-07-01 22:10:12
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: WA
 * Execution Time: 156 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

bool compare(const pair<double, int>& a, const pair<double, int>& b) {
  if (a.first != b.first) {
    return a.first > b.first;  // firstの降順
  }
  return a.second < b.second;  // secondの昇順
}

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> data(N);
  rep(i, N) {
    int A, B;
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