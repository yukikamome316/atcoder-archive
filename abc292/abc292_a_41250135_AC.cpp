/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/41250135
 * Submitted at: 2023-05-08 18:58:56
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_a
 * Result: AC
 * Execution Time: 14 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    string S; cin >> S;

    string T = "";  // 文字列Tを用意し、中身を空に初期化する
    rep(i, S.size()) T += toupper(S[i]);

    cout << T << endl;
}