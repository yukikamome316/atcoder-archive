/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abs/submissions/30989305
 * Submitted at: 2022-04-16 02:25:08
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc086_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <iostream>
using namespace std;
int main()
{
	int a, b;
  	cin >> a >> b;
  	if (a*b == 1)
    	cout << "Odd";
  	else if (a*b % 2 == 0) {
    	cout << "Even";
    } else {
    	cout << "Odd";
    }
 	return 0; 	
}