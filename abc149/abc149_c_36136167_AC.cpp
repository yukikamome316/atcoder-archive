/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc149/submissions/36136167
 * Submitted at: 2022-11-01 18:52:34
 * Problem URL: https://atcoder.jp/contests/abc149/tasks/abc149_c
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int X; cin >> X;
    int i = 0;
    while (true) {
        bool is_prime = true;
        for (ll j = 2; j * j <= (X + i); j++) {
            if ((X + i) % j == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << (X + i) << endl;
            break;
        }
        i++;
    }
}