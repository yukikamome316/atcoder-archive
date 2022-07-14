/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/33219287
 * Submitted at: 2022-07-14 18:47:24
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_b
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int factorio(int n) {
    if (n == 0) return 1;
    return n * factorio(n - 1);
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << factorio(i) / (factorio(j) * factorio(i - j));
            if (j != i) cout << " ";
        }
        cout << endl;
    }
}