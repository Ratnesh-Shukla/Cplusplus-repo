#include <iostream>
using namespace std;

int sumOfArray(int arr[] , int size){
  int sum = 0;
  for(int i = 0 ; i < size ; i++){
    sum = sum + arr[i];
  }
  return sum;
}

int main(){
  int n;
  cout << endl << "Enter the size of array: ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < n; i++){
    cout << "Element " << i <<" : ";
    cin >> num[i];
  }
  
  cout << endl;

  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    cout << num[i] << " ";
  }
  cout << "]" << endl << endl;

  int sum = sumOfArray(num , n);
  cout << "Sum of elements of array: " << sum << endl << endl;
  return 0;
}