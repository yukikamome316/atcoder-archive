/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/47102976
 * Submitted at: 2023-10-31 13:26:00
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_d
 * Result: WA
 * Execution Time: 83 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int a, N;

int dfs(ll x, int N_len, int cnt, bool swapped) {
  if (x == N) return cnt;

  int x_len = log10(x) + 1;
  if (x_len > N_len) return -1;

  int ret = -1;
  if (!swapped && x >= 10 && x % 10 != 0) {
    string x_str = to_string(x);
    swap(x_str[0], x_str[x_len - 1]);
    
    ll x_swapped = stoll(x_str);
    cerr << x_swapped << endl;
    ret = dfs(x_swapped, N_len, cnt + 1, true);
  }

  if (ret != -1) return ret;

  cerr << x * a << endl;
  return dfs(x * a, N_len, cnt + 1, false);
}

int main() {
  cin >> a >> N;
  int N_len = log10(N) + 1;
  cout << dfs(1, N_len, 0, false) << endl;
}