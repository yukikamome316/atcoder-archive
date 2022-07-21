/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc148/submissions/33392915
 * Submitted at: 2022-07-21 18:31:06
 * Problem URL: https://atcoder.jp/contests/abc148/tasks/abc148_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    int A, B; cin >> A >> B;
    vector<int> data = {1, 2, 3};
    data.erase(find(data.begin(), data.end(), A));
    data.erase(find(data.begin(), data.end(), B));
    cout << data[0] << endl;
}