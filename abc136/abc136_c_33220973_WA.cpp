/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33220973
 * Submitted at: 2022-07-14 20:35:37
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: WA
 * Execution Time: 40 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int n; cin >> n;
    vector data(n, 0);
    rep(i, n) {
        cin >> data[i];
    }
    for (auto it = data.rbegin(); it != data.rend(); it--) {
        if (*it - 1 < *(it - 1)) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

}