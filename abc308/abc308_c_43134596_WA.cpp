/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43134596
 * Submitted at: 2023-07-01 22:03:39
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_c
 * Result: WA
 * Execution Time: 184 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
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

  vector<double> score(N);
  rep(i, N) {
    score[i] = (double)data[i].first / (data[i].first + data[i].second);
  }

  auto score2 = score;
  sort(score2.begin(), score2.end());

  score2.erase(unique(score2.begin(), score2.end()), score2.end());

  vector<int> res(score.size());
  for (int i = 0; i < score.size(); ++i) {
    res[i] = lower_bound(score2.begin(), score2.end(), score[i]) - score2.begin();
  }
  
  vector<pair<int, int>> s(N);
  rep(i, N) {
    s[i] = {res[i], i};
  }

  sort(s.begin(), s.end(), compare);

  rep(i, N) {
    cout << s[i].second + 1 << " ";
  }

  cout << endl;
}