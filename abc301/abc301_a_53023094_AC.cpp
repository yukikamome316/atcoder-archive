/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc301/submissions/53023094
 * Submitted at: 2024-05-02 18:45:09
 * Problem URL: https://atcoder.jp/contests/abc301/tasks/abc301_a
 * Result: AC
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

    if (T == A) {
        if (S[N - 1] == 'T') T--;
        else A--;
    }

    cout << (T >= A ? "T" : "A") << endl;
    
}