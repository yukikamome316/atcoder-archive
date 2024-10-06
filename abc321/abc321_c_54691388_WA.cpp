/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc321/submissions/54691388
 * Submitted at: 2024-06-18 19:00:45
 * Problem URL: https://atcoder.jp/contests/abc321/tasks/abc321_c
 * Result: WA
 * Execution Time: 1 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}

int main() {
  int k;
  cin >> k;

  vector<int> nums;
  rep(bits, 1 << 10) {
    int num = 0;
    for (int i = 9; i >= 0; i--) {
      if (bits & (1 << i)) {
        num *= 10;
        num += i;
      }
    }
    nums.push_back(num);
  }
  sort(nums.begin(), nums.end());

  cout << nums[k + 1] << endl;
}
