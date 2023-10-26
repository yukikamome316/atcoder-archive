/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/adt_all_20231026_2/submissions/46943963
 * Submitted at: 2023-10-26 18:45:32
 * Problem URL: https://atcoder.jp/contests/adt_all_20231026_2/tasks/abc244_b
 * Result: AC
 * Execution Time: 3 ms
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
  string T;
  cin >> T;
  pair<int, int> pos = {0, 0};

  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, -1, 0, 1};

  int dir = 0;
  rep(i, N) {
    if (T[i] == 'S') {
      pos.first += dx[dir];
      pos.second += dy[dir];
    } else {
      dir = (dir + 1) % 4;
    }
  }

  cout << pos.first << " " << pos.second << endl;
}