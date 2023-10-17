/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc038/submissions/46687263
 * Submitted at: 2023-10-17 19:30:55
 * Problem URL: https://atcoder.jp/contests/abc038/tasks/abc038_c
 * Result: WA
 * Execution Time: 16 ms
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
  vector<int> a(N);
  rep(i, N) cin >> a[i];

  int right = 0;
  int cnt = 0;

  rep(left, N) {
    while (right < N && (right <= left || a[right - 1] < a[right])) {
      right++;
    }

    cnt += right - left;
    if (left == right) right++;
  }

  cout << cnt << endl;
}