/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35877837
 * Submitted at: 2022-10-22 21:24:08
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_b
 * Result: AC
 * Execution Time: 30 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;
    vector<string> a(H);
    rep(i, H) {
        cin >> a[i];
    }

    rep(i, W) {
        int count = 0;
        rep(j, H) {
            if (a[j][i] == '#') count++;
        }
        if (i != W - 1) {
            cout << count << " ";
        } else {
            cout << count << endl;
        }
    }

}