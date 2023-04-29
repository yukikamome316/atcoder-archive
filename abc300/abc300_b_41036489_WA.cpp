/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41036489
 * Submitted at: 2023-04-29 21:34:10
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
 * Result: WA
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;

    vector<string> A(H);
    vector<string> B(H);

    rep(i, H) cin >> A[i];
    rep(i, H) cin >> B[i];

    vector<int> A_count(H);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (A[i][j] == '#') cnt++;
        }
        A_count[i] = cnt;
    }

    vector<int> B_count(H);
    rep(i, H) {
        int cnt = 0;
        rep(j, W) {
            if (B[i][j] == '#') cnt++;
        }
        B_count[i] = cnt;
    }
    
    set<int> A_set(A_count.begin(), A_count.end());
    set<int> B_set(B_count.begin(), B_count.end());
    
    cout << (A_set == B_set ? "Yes" : "No") << endl;

}