/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/42236542
 * Submitted at: 2023-06-13 18:55:07
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_a
 * Result: WA
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N)
    cin >> a[i];

  sort(a.begin(), a.end());

  int max_count = -1e9;
  rep(i, a.back()) {
    auto right_itr = upper_bound(a.begin(), a.end(), i + 1);
    auto left_itr = lower_bound(a.begin(), a.end(), i - 1);
    int size = right_itr - left_itr;
    max_count = max(max_count, size);
  }
  cout << max_count << endl;
}