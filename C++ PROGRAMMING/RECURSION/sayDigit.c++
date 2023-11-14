#include <bits/stdc++.h>
using namespace std;
void sayDigit(int n , string arr[]){
  if(n == 0){
    return;
  }
  int digit = n%10;
  n = n/10;
  cout << arr[digit] << " ";    // it gives us tail recursion
  sayDigit(n, arr);
  cout << arr[digit] << " ";    // it gives us head recursion
}
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  cout << endl << endl;
  sayDigit(n, arr);
  cout << endl << endl;
  return 0;
}