/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc214/submissions/35587100
 * Submitted at: 2022-10-11 19:22:22
 * Problem URL: https://atcoder.jp/contests/abc214/tasks/abc214_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int S, T; cin >> S >> T;
    int count = 0;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (i + j + k <= S && i * j * k <= T)
                    count++;
            }
        }
    }
    cout << count << endl;
}