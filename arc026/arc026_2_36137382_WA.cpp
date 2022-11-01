/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/arc026/submissions/36137382
 * Submitted at: 2022-11-01 20:04:47
 * Problem URL: https://atcoder.jp/contests/arc026/tasks/arc026_2
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    ll N; cin >> N;
    vector<ll> divisors = {1};
    for (ll i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i * i != N) divisors.push_back(N / i);
        }
    }
    ll sum = accumulate(divisors.begin(), divisors.end(), 0ll);
    if (sum == N) {
        cout << "Perfect" << endl;
    } else {
        cout << (sum < N ? "Deficient" : "Abundant") << endl;
    }
}