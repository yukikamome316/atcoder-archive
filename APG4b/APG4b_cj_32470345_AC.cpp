/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/32470345
 * Submitted at: 2022-06-14 18:51:28
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_cj
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    rep(i, n) {
        cin >> vec[i];
    }
    int ave = accumulate(vec.begin(), vec.end(), 0) / n;

    rep(i, n) {
        cout << abs(ave - vec[i]) << endl;
    }

}