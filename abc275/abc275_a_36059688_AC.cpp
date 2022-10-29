/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36059688
 * Submitted at: 2022-10-29 21:48:35
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; scanf("%d", &N);
    ll H[N]; rep(i, N) scanf("%lld", &H[i]);
    
    int result = 0;
    ll max = H[0];
    rep2(i, 1, N) {
        if (max < H[i]) {
            max = H[i];
            result = i;
        }
    }
    printf("%d", result + 1);

}