/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc295/submissions/41244336
 * Submitted at: 2023-05-08 15:01:19
 * Problem URL: https://atcoder.jp/contests/abc295/tasks/abc295_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> W(N); rep(i, N) cin >> W[i];

    vector<string> keywords = {
        "and", "not", "that", "the", "you"
    };

    for (auto&& word : W) {
        for (auto&& keyword : keywords) {
            if (word == keyword) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

}