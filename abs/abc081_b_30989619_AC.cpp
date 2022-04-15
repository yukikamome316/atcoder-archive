/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abs/submissions/30989619
 * Submitted at: 2022-04-16 03:00:20
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc081_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <iostream>
using namespace std;
int main()
{
  	int N;
  	cin >> N;
	int a[N];
  	int counter = 0;
  	for (int i = 0; i < N; i++) cin >> a[i];
  	while (true) {
    	for (int i = 0; i < N; i++) {
        	if (a[i] == 1 || a[i] % 2 != 0)
              goto _ret;
        }
      	for (int i = 0; i < N; i++) {
     		a[i] /= 2;
        }
      	counter++;  
    }
_ret:
  	cout << counter;
  	return 0;
}