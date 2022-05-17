/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31763595
 * Submitted at: 2022-05-17 19:12:10
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, H, C, W;
    cin >> H >> W >> R >> C;
    int count = 0;

    for (int i = 1; i < H + 1; i++) {
        for (int j = 1; j < W + 1; j++) {
            if (abs(R - i) + abs(C - j) == 1) count++;
        }
    }
    cout << count << endl;

}