/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/41889840
 * Submitted at: 2023-06-01 19:08:15
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int>> S(M);
    rep(i, M) {
        int C;
        cin >> C;
        set<int> tmp;
        rep(j, C) {
            int a;
            cin >> a;
            tmp.insert(a);
        }
        S[i] = tmp;
    }

    int cnt = 0;
    for (int bits = 1; bits < (1 << M); bits++) {
        set<int> merged;
        rep(i, M) {
            if (bits & (1 << i)) {
                for (int x : S[i])
                    merged.insert(x);
            }
        }
        if (merged.size() == N) cnt++;
    }

    cout << cnt << endl;
}