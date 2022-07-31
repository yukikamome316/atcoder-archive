/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/33659494
 * Submitted at: 2022-07-31 21:02:40
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int y; cin >> y;
    while(y % 4 != 2) {
        y++;
    }
    cout << y << endl;
}