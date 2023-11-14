#include <bits/stdc++.h>
using namespace std;
int nthStair(long long n){
  if(n < 0){  //since stairs cannot be less than 0
    return 0;
  }
  if(n == 0){   // no of ways to stand at 0th stair
    return 1;
  }

  /*To reach nth stair we have to come either from (n-1)th stair or from (n-2)th stair*/
  int ans = nthStair(n-1) + nthStair(n-2);
  return ans;
}

int main(){
  int n;
  cout << "Enter the destination stair: ";
  cin >> n;
  cout << "Ways to reach the nth stair: " << nthStair(n);
}