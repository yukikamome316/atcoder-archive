/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc061/submissions/41304911
 * Submitted at: 2023-05-11 18:59:08
 * Problem URL: https://atcoder.jp/contests/abc061/tasks/abc061_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N, M; cin >> N >> M;
    vector graph(N, vector<int>());
    
    rep(i, M) {
        int a, b; cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    rep(i, N)
        cout << graph[i].size() << endl;

}