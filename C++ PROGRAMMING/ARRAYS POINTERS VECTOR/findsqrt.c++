#include <iostream>
using namespace std;

long long int sqrt(int n){
  int s = 0;
  int e = n;
  long long int ans = -1;
  long long int mid = s + (e - s)/2;
  while(s <= e){
    long long int sq = mid*mid;
    if (sq == n){
      return mid;
    }
    if (sq < n){
      ans = mid;
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

int main(){
  int square;
  cout << endl << "Enter the number : " ;
  cin >> square;

  cout << endl;

  cout << "Square Root of the number is : " << sqrt(square) << endl << endl;
  return 0;
}