/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc012/submissions/41305893
 * Submitted at: 2023-05-11 19:55:03
 * Problem URL: https://atcoder.jp/contests/arc012/tasks/arc012_2
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cout << fixed << setprecision(15);
    int N, va, vb, L;
    cin >> N >> va >> vb >> L;

    double ret = L;
    while (N--) {
        ret = ret / va * vb;
    }
    cout << ret << endl;
}