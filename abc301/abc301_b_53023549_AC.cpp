/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/53023549
 * Submitted at: 2024-05-02 19:03:55
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_b
 * Result: AC
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n - 1) {
    if (a[i] < a[i + 1]) {
      for (int j = a[i]; j != a[i + 1]; j++) {
        cout << j << " ";
      }
    } else if (a[i] > a[i + 1]) {
      for (int j = a[i]; j != a[i + 1]; j--) {
        cout << j << " ";
      }
    } else {
      cout << a[i] << " ";
    }
  }
  cout << a[n - 1] << endl;
}
