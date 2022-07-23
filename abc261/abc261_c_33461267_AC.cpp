/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33461267
 * Submitted at: 2022-07-23 21:45:44
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_c
 * Result: AC
 * Execution Time: 440 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<string> data(N);
    rep(i, N) {
        cin >> data[i];
    }
    map<string, int> table;
    rep(i, N) {
        if (table[data[i]] == 0) {
            cout << data[i] << endl;
        } else {
            cout << data[i] << "(" << table[data[i]] << ")" << endl;
        }
        table[data[i]]++;
    }
}