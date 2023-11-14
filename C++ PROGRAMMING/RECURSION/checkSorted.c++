#include <bits/stdc++.h>
using namespace std;
 
 bool isSorted(int *arr, int size){
  if(size == 0 || size == 1){
    return true;
  }
  if(arr[0] > arr[1]){
    return false;
  }
  bool remaining = isSorted(arr+1, size - 1);
  return remaining;
 }
 int summation(int *arr, int size){

  if(size == 0){
    return 0;
  }
  int sum = summation(arr +1, size -1) + arr[0];

  return sum;
 }
 bool linearSearch(int *arr, int size, int key){
  if(size == 0){
    return 0;
  }
  if(key == arr[0]){
    return 1;
  }
  bool remaining = linearSearch(arr+1, size-1, key);
  return remaining;
 }
 int main(){
  int n;
  int arr[100];
  cout << "Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < n; i++){
    cout << "Element " << i <<" : ";
    cin >> arr[i];
  }
  
  cout << endl << endl <<"Array --> [ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ,";
  }
  cout << "\b]" << endl << endl;  // \b is used to backspace the previous element

  bool sort = isSorted(arr, n);
  if(sort == 1){
    cout << "Array is sorted " << endl;
  }
  else{
    cout << "Array is not sorted " << endl;
  }

  cout << "Sum of elements: " << summation(arr,n) << endl;
  int key;
  cout << "Enter the value of key: ";
  cin >> key;
  bool search = linearSearch(arr, n, key);
  if(search){
    cout<< "Key is present.";
  }
  else{
    cout << "Key is absent.";
  }
  return 0;
 }