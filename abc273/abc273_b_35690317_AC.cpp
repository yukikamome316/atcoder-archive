/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35690317
 * Submitted at: 2022-10-15 22:26:41
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;


int main() {
    ll X; cin >> X;
    int K; cin >> K;

    rep(i, K) {
        ll buf = pow(10, i + 1);
        ll diff = X;
        ll Y = X / buf * buf;
        while (true) {
            ll now_diff = abs(Y - X);
            if (now_diff > diff) break;
            diff = now_diff;
            Y += buf;
        }
        Y -= buf;
        if (abs(Y-X) == abs(Y+buf-X)) 
            X = Y+buf;
        else
            X = Y;
    }
    cout << X << endl;
    
}