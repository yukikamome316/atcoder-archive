/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/36137549
 * Submitted at: 2022-11-01 20:14:31
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (i % 2 == 0) continue;
        vector<int> divisors = {1, i};
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                divisors.push_back(j);
                if (j * j != i) divisors.push_back(i / j);
            }
        }
        if (divisors.size() == 8) count++;
    }
    cout << count << endl;
}