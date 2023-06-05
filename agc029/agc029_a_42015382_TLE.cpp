/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/agc029/submissions/42015382
 * Submitted at: 2023-06-05 16:06:25
 * Problem URL: https://atcoder.jp/contests/agc029/tasks/agc029_a
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;

  vector<int> id(S.size());
  int idx = 0;
  rep(i, S.size()) {
    if (S[i] == 'W') id[i] = idx++;
  }
  rep(i, S.size()) {
    if (S[i] == 'B') id[i] = idx++;
  }

  int cnt = 0;
  rep(i, S.size()) {
    for (int j = S.size() - 1; j > i; j--) {
      if (id[j] < id[j - 1]) {
        swap(id[j], id[j - 1]);

        cnt++;
      }
    }
  }

  cout << cnt << endl;
}