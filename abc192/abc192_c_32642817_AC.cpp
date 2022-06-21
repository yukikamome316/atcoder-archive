/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc192/submissions/32642817
 * Submitted at: 2022-06-21 21:13:14
 * Problem URL: https://atcoder.jp/contests/abc192/tasks/abc192_c
 * Result: AC
 * Execution Time: 49 ms
 */

#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;

string f(string N) {
    string lt = N;
    sort(lt.begin(), lt.end());
    string gt = N;
    sort(gt.begin(), gt.end());
    reverse(gt.begin(), gt.end());
    return to_string(stoi(gt) - stoi(lt));
}

string calc(string N, int K) {
    if (K == 0) return N;
    return f(calc(N, K - 1));
}

int main() {
    string N_str;
    int K;
    cin >> N_str >> K;
    cout << calc(N_str, K) << endl;
}