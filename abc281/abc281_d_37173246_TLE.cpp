/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37173246
 * Submitted at: 2022-12-10 22:05:07
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }

ll f(int dep, vector<ll> p, vector<ll>& a, int D) {
    if (dep == 0) {
        ll sum = 0;
        rep(i, p.size()) {
            sum += a[p[i]];
        }
        if (sum % D == 0) return sum;
        return -1;
    }
    ll ans = -1;
    for (int i = 0; i < a.size(); i++) {
        if (find(p.begin(), p.end(), i) != p.end()) continue;
        vector<ll> new_p = p;
        new_p.push_back(i);
        ll buf = f(dep - 1, new_p, a, D);
        if (buf % D == 0) chmax(ans, buf);
    }
    return ans;
}

int main() {
    int N, K, D; cin >> N >> K >> D;
    vector<ll> a(N); rep(i, N) cin >> a[i];
    cout << f(K, {}, a, D) << endl;
    
}