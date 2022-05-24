/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc203/submissions/31932788
 * Submitted at: 2022-05-24 19:13:11
 * Problem URL: https://atcoder.jp/contests/abc203/tasks/abc203_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;
int main() {
    int N, K;
    cin >> N >> K;
    int result = 0;
    string str;

    rep(i, N) {
        rep(j, K) {
            str = to_string(i + 1) + "0" + to_string(j + 1);
            result += atoi(str.c_str());
        }
    }

    cout << result << endl;
    
}