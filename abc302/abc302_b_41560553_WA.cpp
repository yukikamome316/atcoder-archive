/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41560553
 * Submitted at: 2023-05-20 21:43:13
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_b
 * Result: WA
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;
    vector<string> grid(H);
    rep(i, H) cin >> grid[i];
    
    string words = "snuke";
    vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};
    vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};

    auto isValidPos = [&](pair<int, int> pos) {
        if (pos.first >= 0 && pos.first < H
            && pos.second >= 0 && pos.second < W) return true;
        return false;
    };

    vector<pair<int, int>> ans(5, {-1, -1});

    rep(i, H) rep(j, W) {
        if (grid[i][j] != 's') continue;

        ans[0] = {i, j};
        
        rep(k, 8) rep2(l, 1, 5) {
            pair<int, int> v = {i + dy[k] * l, j + dx[k] * l};
            if (!isValidPos(v)) continue;
            
            if (grid[v.first][v.second] != words[l]) break;
            ans[l] = v;
        }
    }

    for (auto x : ans) {
        cout << x.first + 1 << " " << x.second + 1 << endl;
    }

}