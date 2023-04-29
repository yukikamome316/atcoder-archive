/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/41056991
 * Submitted at: 2023-04-30 00:34:05
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_c
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;
    vector<string> C(H);
    rep(i, H) cin >> C[i];

    vector<int> cnt(min(H, W) + 1, 0);

    rep2(i, 1, H - 1) {
        rep2(j, 1, W - 1) {
            if (C[i][j] != '#') continue;
            
            int d = 1;
            bool marked = false;
            while (d <= min(H, W)) {
                if (i + d >= H || i - d < 0 
                    || j + d >= W || j - d < 0) break;

                if (C[i + d][j + d] == '#' && C[i + d][j - d] == '#' && C[i - d][j + d] == '#' && C[i - d][j - d] == '#') {
                    marked = true;
                    d++;
                } else {
                    break;
                }
            }
            if (marked) cnt[d - 1]++;
        }
    }
    
    rep2(i, 1, min(H, W))
        cout << cnt[i] << " ";
    
    cout << cnt[min(H, W)] << endl;
}