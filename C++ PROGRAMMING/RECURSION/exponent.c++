#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b){
  if(b == 0){
    return 1;
  }
  if(b == 1){
    return a;
  }
  int ans = pow(a, b/2);
  if(b%2 == 0){
    return ans * ans;
  }
  else{
    return a*ans*ans;
  }
}

int main(){
  int a, b;
  cout << endl <<  "Enter the value of a: ";
  cin >> a;
  cout << endl << "Enter the value of b: ";
  cin >> b;
  int power = pow(a, b);
  cout << endl << "Answer is: " << power << endl << endl;
  return 0;
}
