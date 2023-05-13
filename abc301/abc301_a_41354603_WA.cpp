/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/41354603
 * Submitted at: 2023-05-13 21:12:56
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int T = 0, A = 0;
    rep(i, N) {
        if (S[i] == 'T') T++;
        else A++;
    }

    cout << (T >= A ? "T" : "A") << endl;
}