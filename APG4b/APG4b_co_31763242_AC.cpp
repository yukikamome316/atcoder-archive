/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/31763242
 * Submitted at: 2022-05-17 18:49:31
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_co
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;
    string text;
    int price;
    // パターン1
    if (p == 1) {
        cin >> price;
    }

    // パターン2
    if (p == 2) {

        cin >> text >> price;
    }

    int N;
    cin >> N;
    if (text != "") {
        cout << text << "!" << endl;
    }
    cout << price * N << endl;
}
