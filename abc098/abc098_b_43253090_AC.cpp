/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/43253090
 * Submitted at: 2023-07-04 23:25:01
 * Problem URL: https://atcoder.jp/contests/abc098/tasks/abc098_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  rep(i, N) {
    string left = S.substr(0, i);
    string right = S.substr(i, N - i);

    set<char> cap;
    rep(j, left.size()) {
      rep(k, right.size()) {
        if (left[j] == right[k])
          cap.insert(left[j]);
      }
    }

    ans = max(ans, (int)cap.size());
  }

  cout << ans << endl;

}