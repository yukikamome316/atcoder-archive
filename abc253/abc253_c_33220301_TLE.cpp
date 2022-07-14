/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/33220301
 * Submitted at: 2022-07-14 19:54:43
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

int main() {
    int Q; cin >> Q;
    vector<int> S;
    rep(i, Q) {
        int mode; cin >> mode;
        if (mode == 1) {
            int buf;
            cin >> buf;
            S.emplace_back(buf);
        } else if (mode == 2) {
            int x, c;
            cin >> x >> c;
            int ctr = min(c, (int)count(S.begin(), S.end(), x));
            rep(j, ctr) {
                S.erase(find(S.begin(), S.end(), x));
            }
        } else if (mode == 3) {
            cout 
                << *max_element(S.begin(), S.end())
                    - *min_element(S.begin(), S.end())
                << endl;
        }
        
    }
}