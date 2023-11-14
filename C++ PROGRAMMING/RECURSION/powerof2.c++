#include <bits/stdc++.h>
using namespace std;
int pow(int n){
  if(n == 0){
    return 1;
  }
  /* 
  int smallProblem = pow(n-1);
  int bigProblem = 2 * smallProblem;
  return bigProblem;
  */   /*Summary*/
  return 2*pow(n-1);
}

int main() {
  int n;
  cout << "Enter power: "; cin >> n; cout << "Power: " << pow(n); return 0;
}