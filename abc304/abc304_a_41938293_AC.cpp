/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41938293
 * Submitted at: 2023-06-03 21:07:03
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> A(N);
    rep(i, N) {
      cin >> S[i] >> A[i];
    }

    int min_idx = min_element(A.begin(), A.end()) - A.begin();
    int idx = min_idx;
    bool initialized = false;
    while (idx != min_idx || !initialized) {
      idx %= N;
      cout << S[idx] << endl;
      idx = (idx + 1) % N;
      initialized = true;
    }

}