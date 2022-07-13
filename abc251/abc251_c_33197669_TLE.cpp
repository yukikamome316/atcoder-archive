/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc251/submissions/33197669
 * Submitted at: 2022-07-13 14:26:08
 * Problem URL: https://atcoder.jp/contests/abc251/tasks/abc251_c
 * Result: TLE
 * Execution Time: 2206 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> str_data;
    vector<int> point_data;
    rep(i, N) {
        string buf_1;
        int buf_2;
        cin >> buf_1 >> buf_2;
        str_data.emplace_back(buf_1);
        point_data.emplace_back(buf_2);
    }
    set<string> str_set(str_data.begin(), str_data.end());

    int max_point = 0;
    int max_offset = -1;
    for (string str : str_data) {
        auto it = find(str_data.begin(), str_data.end(), str);
        int point = point_data[it - str_data.begin()];
        if (point > max_point) {
            max_point = point;
            max_offset = it - str_data.begin() + 1;
        }
    }
    cout << max_offset << endl;

}