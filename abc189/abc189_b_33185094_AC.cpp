/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/33185094
 * Submitted at: 2022-07-12 19:30:14
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_b
 * Result: AC
 * Execution Time: 5 ms
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
        sum += V * P;
        if (sum > X * 100) {
            count = i + 1;
            break;
        }
    }
    cout << count << endl;
}