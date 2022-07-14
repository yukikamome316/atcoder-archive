/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/33218887
 * Submitted at: 2022-07-14 18:22:03
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018b_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int n, h, w; cin >> n >> h >> w;
    int count = 0;
    rep(i, n) {
        int h_i, w_i; cin >> h_i >> w_i;
        if (h_i >= h && w_i >= w) count++;
    }
    cout << count << endl;
}