#include <iostream>
using namespace std;

int getPivot(int arr[] , int size){
  int s = 0;
  int e = size - 1;
  int mid = s + (e - s)/2;
  while(s < e){
    if(arr[mid] >= arr[0]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
    mid = s + (e - s)/2;
  }
  return s;
}

int binarySearch(int arr[] , int start , int end , int key){
  int s = start;
  int e = end;
  int mid = s + (e - s)/2;
  while(s <= e){
    if(arr[mid] == key){
      s = mid + 1;
      return mid;
    }
    if(key > arr[mid]){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return -1;
}

int positionOfElement(int arr[] , int n , int key){
  int pivot = getPivot(arr , n);
  if(key >= arr[pivot] && key <= arr[n-1]){
    return binarySearch(arr , pivot , n-1 , key);
  }
  else{
    return binarySearch(arr , 0 , pivot -1 , key);
  }
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
  cout << "ENTER THE ELEMENTS OF ROTATED ARRAY" << endl;
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

  int index = positionOfElement(num , n , key);
  cout << "Index of " << key << " is : " << index << endl << endl;

  return 0;
}