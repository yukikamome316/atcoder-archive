/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/32815758
 * Submitted at: 2022-06-28 19:19:50
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_c
 * Result: WA
 * Execution Time: 58 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N = 0;
    cin >> N;
    vector<int> data(N);
    rep(i, N) {
        cin >> data[i];
    }

    int result = 0;
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= j - 1; j++) {
            result += (data[i] - data[j])*(data[i] - data[j]);
        }
    }
    cout << result << endl;
}