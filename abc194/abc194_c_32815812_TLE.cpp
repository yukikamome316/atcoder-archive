/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/32815812
 * Submitted at: 2022-06-28 19:24:21
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> data(N);
    rep(i, N) {
        cin >> data[i];
    }

    int result = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            result += (data[i] - data[j])*(data[i] - data[j]);
        }
    }
    cout << result << endl;
}