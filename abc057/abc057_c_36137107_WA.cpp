/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc057/submissions/36137107
 * Submitted at: 2022-11-01 19:51:12
 * Problem URL: https://atcoder.jp/contests/abc057/tasks/abc057_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

ll getDigit(ll num){
	ll digit = 0;
	while (num != 0){
		num /= 10;
		digit++;
	}
	return digit;
}

int main() {
    ll N; cin >> N;
    vector<ll> divisors = {1, N};
    for (ll i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i * i != N) divisors.push_back(N / i);
        }
    }
    sort(divisors.begin(), divisors.end());

    vector<ll> results;
    if (results.size() % 2 == 0) {
         for (auto it = divisors.begin(); it != divisors.begin() + divisors.size() / 2; it++) {
            results.push_back(getDigit(*(divisors.rbegin() + (it - divisors.begin()))));
         }
    } else {
        for (auto it = divisors.begin(); it != divisors.begin() + divisors.size() / 2; it++) {
            results.push_back(getDigit(*(divisors.rbegin() + (it - divisors.begin()))));
        }
    }
    cout << *min_element(results.begin(), results.end()) << endl;
}