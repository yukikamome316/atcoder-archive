/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc354/submissions/53634007
 * Submitted at: 2024-05-18 22:35:37
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

struct Data {
  int a;
  int c;
  int index;
};

bool compareByA(const Data& a, const Data& b) {
  return a.a > b.a;
}

bool compareByC(const Data& a, const Data& b) {
  return a.c < b.c;
}

int main() {
  int n;
  cin >> n;
  vector<Data> data(n);
  rep(i, n) {
    int a_tmp, c_tmp;
    cin >> a_tmp >> c_tmp;
    data[i].a = a_tmp;
    data[i].c = c_tmp;
    data[i].index = i;
  }

  vector<Data> data2, data3;

  data2 = data3 = data;

  sort(data2.begin(), data2.end(), compareByA);

  sort(data3.begin(), data3.end(), compareByC);

  set<int> result;
  rep(i, n) {
    auto it = upper_bound(data3.begin(), data3.end(), data2[i], compareByC);
    for (auto it2 = it; it2 != data3.end(); it2++) {
      if (it2->a < data2[i].a)
        result.insert(it2->index);
    }
  }

  cout << n - result.size() << endl;
  rep(i, n) {
    if (result.find(i) == result.end()) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;

  return 0;
}
