#include <iostream>
using namespace std;
bool binarySearch(int *arr, int s, int e, int key){
  if(s > e){
    return false;
  }
  int mid = s + (e-s)/2;
  if(arr[mid] == key){
    return true;
  }
  if(arr[mid] < key){
    return binarySearch(arr, mid + 1, e , key);
  }
  else{
    return binarySearch(arr, s, mid -1 , key);
  }
}

int main(){
  int n;
  int s =0;
  int arr[100];
  cout << endl <<"Enter the size of the array: ";
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
  cout << "\b]" << endl << endl;
  int key;
  cout << "Enter the value of key: ";
  cin >> key;
  bool search = binarySearch(arr, s, n-1, key);
  if(search){
    cout<< "Key is present." << endl;
  }
  else{
    cout << "Key is absent." << endl;
  }
  return 0;
}