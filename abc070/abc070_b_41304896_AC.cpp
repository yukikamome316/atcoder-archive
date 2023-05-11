/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc070/submissions/41304896
 * Submitted at: 2023-05-11 18:58:19
 * Problem URL: https://atcoder.jp/contests/abc070/tasks/abc070_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int tmp = -1;
    rep(i, 101) {
        if (i >= A && i <= B && i >= C && i <= D) tmp++;
    }
    cout << (tmp > 0 ? tmp : 0) << endl;
}