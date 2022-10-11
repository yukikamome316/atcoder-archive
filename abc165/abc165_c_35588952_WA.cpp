/*
 * Author: yukikamome316
 * Submission URL: https://atcoder.jp/contests/abc165/submissions/35588952
 * Submitted at: 2022-10-11 21:07:00
 * Problem URL: https://atcoder.jp/contests/abc165/tasks/abc165_c
 * Result: WA
 * Execution Time: 425 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int f(int dep, vector<int> A, int M, vector<vector<int>> data){
  if(dep==0){
    int point = 0;
    rep(i, data.size()){
      if(A[data[i][1]] - A[data[i][0]]==data[i][2])
        point += data[i][3];
    }
    return point;
  } 

  int lastA;
  int point=0;
  if(A.empty()) lastA=1;
  else lastA=A.back();
  for(int i=lastA; i<=M; i++) {
    A.push_back(i);
    point += f(dep-1, A, M, data);
  }
  return point;
}

int main(){
  int N, M, Q; cin >> N  >> M >> Q;
  vector data(Q, vector<int>(4));
  rep(i, Q){
    rep(j, 4){
      cin >> data[i][j];
    }
  }
  cout << f(N, {}, M, data) << endl;
}