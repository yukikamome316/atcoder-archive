/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33220645
 * Submitted at: 2022-07-14 20:18:03
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: WA
 * Execution Time: 202 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int n; cin >> n;
    vector<tuple<string, int, int>> data(n);
    rep(i, n) {
        string buf_1;
        int buf_2;
        cin >> buf_1 >> buf_2;
        data[i] = {buf_1, -buf_2, i + 1};
    }
    sort(data.begin(), data.end()); // for all element
    for (auto [x, y, z] : data) {
        cout << z << endl;
    }
}