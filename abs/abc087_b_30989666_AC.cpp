/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abs/submissions/30989666
 * Submitted at: 2022-04-16 03:06:09
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc087_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <iostream>
using namespace std;
int main()
{
  	int A, B, C, X;
  	cin >> A >> B >> C >> X;
  	
  	int n = 0;
  	for (int i = 0; i <= A; i++) {
   		for (int j = 0; j <= B; j++) {
        	for (int k = 0; k <= C; k++) {
            	if (500*i + 100*j + 50*k == X)
                  n++;
            }
        }
    }
  	cout << n;
  	return 0;
}