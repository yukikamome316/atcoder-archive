/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc088/submissions/37409724
 * Submitted at: 2022-12-20 19:54:10
 * Problem URL: https://atcoder.jp/contests/abc088/tasks/abc088_d
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int H, W; cin >> H >> W;
    vector<string> grid(H);
    rep(i, H) cin >> grid[i];

    int sx = 0, sy = 0;
    vector dist(H, vector<int>(W, -1));
    dist[sx][sy] = 0;
    queue<pair<int, int>> que;
    que.push({sx, sy});

    while (!que.empty()) {
        auto [i, j] = que.front();
        que.pop();
        if (i > 0 && grid[i - 1][j] != '#' && dist[i - 1][j] == -1) {
            dist[i - 1][j] = dist[i][j] + 1;
            que.push({i - 1, j});
        }
        if (i < H - 1 && grid[i + 1][j] != '#' && dist[i + 1][j] == -1) {
            dist[i + 1][j] = dist[i][j] + 1;
            que.push({i + 1, j});
        }
        if (j > 0 && grid[i][j - 1] != '#' && dist[i][j - 1] == -1) {
            dist[i][j - 1] = dist[i][j] + 1;
            que.push({i, j - 1});
        }
        if (j < W - 1 && grid[i][j + 1] != '#' && dist[i][j + 1] == -1) {
            dist[i][j + 1] = dist[i][j] + 1;
            que.push({i, j + 1});
        }
    }

    int black_count = 0;
    rep(i, H) {
        rep(j, W) {
            if (grid[i][j] == '#') black_count++;
        }
    }
    cout << H * W - (dist[H - 1][W - 1] + 1) - black_count << endl;
    

}