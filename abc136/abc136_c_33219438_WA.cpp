/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/33219438
 * Submitted at: 2022-07-14 18:56:33
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_c
 * Result: WA
 * Execution Time: 38 ms
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
    rep(i, n - 1) {
        if (data[i] <= data[i + 1]) continue;
        while (data[i] > data[i + 1]) data[i]--;
    }

    cout << (data[n - 1] < data[n] ? "Yes" : "No") << endl;

}