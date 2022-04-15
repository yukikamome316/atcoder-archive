/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abs/submissions/30989354
 * Submitted at: 2022-04-16 02:28:41
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc081_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
using namespace std;
int main()
{
	string a;
  	cin >> a;
  	int ctr = 0;
  	if (a[0] == '1') ++ctr;
  	if (a[1] == '1') ++ctr;
 	if (a[2] == '1') ++ctr;
  	cout << ctr;
  	return 0;
}