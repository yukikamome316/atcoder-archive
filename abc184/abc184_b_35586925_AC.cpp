/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc184/submissions/35586925
 * Submitted at: 2022-10-11 19:10:30
 * Problem URL: https://atcoder.jp/contests/abc184/tasks/abc184_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N, X; cin >> N >> X;
    string S; cin >> S;
    rep(i, N) {
        if (S[i] == 'o') {
            X++;
        } else {
            if (X > 0) X--;
        }
    }
    cout << X << endl;
}