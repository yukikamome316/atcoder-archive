/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/41460355
 * Submitted at: 2023-05-16 20:01:00
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/abc007_3
 * Result: WA
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;

    vector board(R + 1, vector<char>(C + 1));
    rep2(i, 1, R + 1) {
        rep2(j, 1, C + 1) {
            cin >> board[i][j];
        }
    }

    vector dist(R + 1, vector<int>(C + 1, -1));
    queue<pair<int, int>> que;
    que.push({sy, sx});

    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    dist[sy][sx] = 0;
    
    while (!que.empty()) {
        pair<int, int> v = que.front();
        que.pop();

        rep(i, 4) {
            int px = v.first + dx[i];
            int py = v.second + dy[i];

            if (py >= 0 && px >= 0 && py <= C + 1 && px <= R + 1) {
                if (dist[py][px] != -1 || board[py][px] == '#') continue;
            
                dist[py][px] = dist[v.second][v.first] + 1;
                que.push({px, py});
            }
        }
    }

    cout << dist[gy][gx] << endl;
    
}