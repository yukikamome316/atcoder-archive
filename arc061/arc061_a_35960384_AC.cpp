/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc061/submissions/35960384
 * Submitted at: 2022-10-25 19:41:28
 * Problem URL: https://atcoder.jp/contests/arc061/tasks/arc061_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    string S; cin >> S;
    int n = S.size();

    ll result = 0;
    for (int bit = 0; bit < (1 << (n - 1)); bit++) {
        vector<ll> parts;
        string ret;
        rep(i, n) {
            ret += S[n - i - 1];
            if (bit & (1 << i)) {
                reverse(ret.begin(), ret.end());
                parts.push_back(stoll(ret));
                ret = "";
            }
        }
        if (ret != "") {
            reverse(ret.begin(), ret.end());
            parts.push_back(stoll(ret));
        }
        result += accumulate(parts.begin(), parts.end(), 0ll);
    }
    cout << result << endl;
}