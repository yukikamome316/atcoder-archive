/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/chokudai_S001/submissions/35431766
 * Submitted at: 2022-10-06 19:18:03
 * Problem URL: https://atcoder.jp/contests/chokudai_S001/tasks/chokudai_S001_j
 * Result: WA
 * Execution Time: 55 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)n; i++)
using namespace std;
using ll = long long;

pair<int, vector<int>> invNum(vector<int> &a) {
    int n = a.size();
    if (n == 1) return {0, a};
    int mid = n / 2;
    vector<int> left_vec(a.begin(), a.begin() + mid);
    vector<int> right_vec(a.begin() + mid, a.end());
    auto left = invNum(left_vec);
    auto right = invNum(right_vec);
    
    int inv = left.first + right.first;
    vector<int> rem;
    int i = 0, j = 0;
    while (i < left.second.size() && j < right.second.size()) {
        if (left.second[i] < right.second[j]) { 
            rem.push_back(left.second[i++]);
        } else {
            rem.push_back(right.second[j++]);
            inv += left.second.size() - i;
        }
    }

    while (i < left.second.size()) rem.push_back(left.second[i++]);
    while (j < right.second.size()) rem.push_back(right.second[j++]);
    return {inv, rem};
}

int main() {
    int N; cin >> N;
    vector<int> data(N);
    rep(i, N) cin >> data[i];
    cout << invNum(data).first << endl;
}