/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc295/submissions/41245082
 * Submitted at: 2023-05-08 15:36:28
 * Problem URL: https://atcoder.jp/contests/abc295/tasks/abc295_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    // 入力の処理
    int N; cin >> N;

    // キーワードの配列を作っておく
    vector<string> keywords = {
        "and", "not", "that", "the", "you"
    };

    rep(i, N) {
        // Wを受けとる
        string word; cin >> word;
        
        // keywordsの要素数と同じ回数だけループさせる
        rep(j, keywords.size()) {
            // wordの1要素に対して、keywordsの5要素をチェック
            if (word == keywords[j]) {
                cout << "Yes" << endl;
                return 0;   // プログラムを終了
            }
        }
    }
    // Wの各要素がkeywordsに含まれていなかったらNoと出力
    cout << "No" << endl;

}