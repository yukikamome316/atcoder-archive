/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53631240
 * Submitted at: 2024-05-18 22:28:28
 * Problem URL: https://atcoder.jp/contests/abc354/tasks/abc354_c
 * Result: TLE
 * Execution Time: 2208 ms
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
  vector<tuple<int, int, int>> data(n);
  rep(i, n) {
    int a_tmp, c_tmp;
    cin >> a_tmp >> c_tmp;
    data[i] = make_tuple(a_tmp, c_tmp, i);
  }

  vector<tuple<int, int, int>> data2, data3;

  data2 = data3 = data;

  sort(data2.begin(), data2.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return get<0>(a) > get<0>(b);
  });

  sort(data3.begin(), data3.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    return get<1>(a) < get<1>(b);
  });

  set<int> result;
  rep(i, n) {
    auto it = upper_bound(data3.begin(), data3.end(), data2[i], [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
      return get<1>(a) < get<1>(b);
    });
    for (auto it2 = it; it2 != data3.end(); it2++) {
      if (get<0>(*it2) < get<0>(data2[i]))
        result.insert(get<2>(*it2));
    }
  }

  cout << n - result.size() << endl;
  rep(i, n) {
    if (find(result.begin(), result.end(), i) == result.end()) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;

  return 0;
}
