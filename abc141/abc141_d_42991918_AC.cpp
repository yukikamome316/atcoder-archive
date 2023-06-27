/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/42991918
 * Submitted at: 2023-06-27 10:42:43
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_d
 * Result: AC
 * Execution Time: 55 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  priority_queue<int> que;
  rep(i, N) {
    int tmp;
    cin >> tmp;
    que.push(tmp);
  }

  while (M--) {
    int x = que.top();
    que.pop();
    que.push(x / 2);
  }

  ll sum = 0;
  while (!que.empty()) {
    sum += que.top();
    que.pop();
  }

  cout << sum << endl;
}