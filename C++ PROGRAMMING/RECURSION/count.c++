#include <bits/stdc++.h>
using namespace std;
void count2(int n){
  if(n == 0){
    return;
  }
  count2(n-1);
  cout << n << " ";   
}
void count1(int n){
  if (n == 0){
    return;
  }
  cout << n << " ";   
  count1(n-1);
}
int main() {
  int n;
  cout << "Enter count: ";
  cin>> n;
  cout << "Head Recursion: ";
  count2(n);
  cout << endl;
  cout << "Tail Recursion: ";
  count1(n);
  return 0;
}