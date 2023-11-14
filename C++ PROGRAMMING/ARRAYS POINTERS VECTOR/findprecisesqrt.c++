#include <iostream> 
using namespace std;

long long int sqrt(int n){
  int s = 0;
  int e = n;
  long long int ans = -1;
  long long int mid = s + (e - s)/2;
  while(s <= e){
    long long int sq = mid * mid;
    if (sq == n){
      return mid;
    }
    if(sq < n){
      ans = mid;
      s = mid + 1;
    }
    else {
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

double morePrecise(int n , int precision , int temp){
  double factor = 1;
  double ans = temp;
  for(int i = 0 ; i < precision ; i++){
    factor = factor / 10;
    for(double j = ans ; j*j < n ; j = j+factor){
      ans = j;
    }
  }
  return ans;
}
int main(){
  int square;
  cout << endl << "Enter the number : " ;
  cin >> square;

  cout << endl;
  int s;
  cout << endl << "Enter the digits of precision of the square root : " ;
  cin >> s;

  cout << endl;

  int temp = sqrt(square);

  cout << "Square Root of " << square << " is : " << morePrecise(square , s , temp) << endl << endl;
  return 0;
}