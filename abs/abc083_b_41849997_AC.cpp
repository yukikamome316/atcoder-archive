/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abs/submissions/41849997
 * Submitted at: 2023-05-30 17:32:02
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc083_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int result = 0;

    for (int i = 1; i <= N; i++) {
        int sum = 0;
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum >= A && sum <= B) result += i;
    }

    cout << result << endl;
}