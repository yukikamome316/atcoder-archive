/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc143/submissions/33399901
 * Submitted at: 2022-07-22 03:29:42
 * Problem URL: https://atcoder.jp/contests/arc143/tasks/arc143_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    vector<int> data(3);
    rep(i, 3) {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    if (data[2] - data[1] > data[0])
        cout << -1 << endl;
    else
        cout << data[2] << endl;
}