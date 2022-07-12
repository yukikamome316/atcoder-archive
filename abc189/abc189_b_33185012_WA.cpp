/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/33185012
 * Submitted at: 2022-07-12 19:23:43
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, X; 
    cin >> N >> X;
    int count = -1;
    int sum = 0;
    rep(i, N) {
        int V, P;
        cin >> V >> P;
        sum += V * 5 / 100.0;
        if (sum >= X) {
            count = i + 1;
            break;
        }
    }
    cout << count << endl;
}