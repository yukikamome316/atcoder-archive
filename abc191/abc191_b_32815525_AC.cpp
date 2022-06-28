/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc191/submissions/32815525
 * Submitted at: 2022-06-28 19:02:47
 * Problem URL: https://atcoder.jp/contests/abc191/tasks/abc191_b
 * Result: AC
 * Execution Time: 49 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> data(N);
    rep(i, N) {
        cin >> data[i];
    }
    rep(i, N) {
        if (data[i] == X) continue;
        cout << data[i];
        if (i == N - 1) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    
}