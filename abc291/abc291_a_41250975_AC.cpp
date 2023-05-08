/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc291/submissions/41250975
 * Submitted at: 2023-05-08 19:40:54
 * Problem URL: https://atcoder.jp/contests/abc291/tasks/abc291_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    string S; cin >> S;
    
    rep(i, S.size()) {
        if (isupper(S[i])) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}