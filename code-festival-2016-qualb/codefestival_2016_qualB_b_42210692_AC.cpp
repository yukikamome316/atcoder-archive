/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-qualb/submissions/42210692
 * Submitted at: 2023-06-12 13:15:28
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
 * Result: AC
 * Execution Time: 153 ms
 */

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (int)s; i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  int cnt = 0, foreigner_cnt = 1;
  rep(i, N) {
    bool passed = false;
    if (S[i] == 'a' && cnt < A + B) {
      passed = true;
      cnt++;
    } else if (S[i] == 'b' && cnt < A + B && foreigner_cnt <= B) {
      passed = true;
      cnt++, foreigner_cnt++;
    }
    cout << (passed ? "Yes" : "No") << endl;
  }
}