/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc295/submissions/41245069
 * Submitted at: 2023-05-08 15:36:06
 * Problem URL: https://atcoder.jp/contests/abc295/tasks/abc295_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int N; cin >> N;

    vector<string> keywords = {
        "and", "not", "that", "the", "you"
    };

    rep(i, N) {
        string word; cin >> word;

        // wordがkeywordsに含まれているか検証したい
        // そこで範囲for文を使ってみる
        // keywordsの要素が、前から1つずつeに代入される
        for (string e : keywords) {
            if (word == e) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

}