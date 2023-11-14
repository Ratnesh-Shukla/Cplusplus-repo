#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
  double pow;
  if(n == 0){
    pow = 1;
  }
  else if(n == 1){
    pow = x;
  }
  else{
    double ans = myPow(x, n/2);
    
  }
  
  return pow;
}
int main(){
  double x;
  int n;
  cout << "Enter the value of x: ";
  cin >> x;
  cout << endl << "Enter the value of n: ";
  cin >> n;
  cout << endl << "Power(x,n) is : " << myPow(x, n) << endl << endl;
  return 0;
}