/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/33220732
 * Submitted at: 2022-07-14 20:23:23
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_b
 * Result: AC
 * Execution Time: 9 ms
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