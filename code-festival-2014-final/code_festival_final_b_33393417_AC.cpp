/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/33393417
 * Submitted at: 2022-07-21 19:00:18
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_b
 * Result: AC
 * Execution Time: 17 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    string S; cin >> S;
    int result = 0;
    rep(i, S.size()) {
        if ((i + 1) % 2 == 0)
            result -= S[i] - '0';
        else
            result += S[i] - '0'; 
    }
    cout << result << endl;
}