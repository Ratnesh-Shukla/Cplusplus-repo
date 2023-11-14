#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
  int start = 0;
  int end = size -1;
  int mid = start + (end - start)/2;      
  while (start <= end){
    if(arr[mid] == key){
      return mid;
    }
    if(key > arr[mid]){
      start = mid + 1;
    }
    else {
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return -1;
}

void printArray(int arr[] , int size){
  cout << "[ ";
  for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
}

int main(){
  int n ;
  cout << endl << "ENTER THE SIZE OF ARRAY : ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "ENTER THE ELEMENTS OF ARRAY (in ascending order):" << endl;
  for(int i = 0 ; i < n ; i++){ 
    cout << "Element " << i << " : ";
    cin >> num [i];
  }
  
  cout << endl;

  cout << " ARRAY -->>  ";
  printArray(num , n);

  int key;
  cout << "ENTER THE VALUE OF KEY : ";
  cin >> key;

  cout << endl;

  int index = binarySearch(num , n , key);
  cout << "Index of " << key << " is : " << index << endl << endl;

  return 0;
}