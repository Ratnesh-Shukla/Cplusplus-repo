                    /* MOUNTAIN ARRAY - Array which is first increasing then decreasing.*/
#include <iostream>
using namespace std;

int peakElementInMountaInArray(int arr[] , int size){
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2;
  while(start < end){
    if(arr[mid] < arr[mid + 1]){
      start = mid + 1;
    }
    else{
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
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
  cout << "ENTER THE ELEMENTS OF MOUNTAIN ARRAY :" << endl;
  for(int i = 0 ; i < n ; i++){ 
    cout << "Element " << i << " : ";
    cin >> num [i];
  }
  
  cout << endl;

  cout << " ARRAY -->>  ";
  printArray(num , n);

  cout << endl;
  
  cout << "Index of peak element in the mountain array : " << peakElementInMountaInArray(num , n) << endl << endl;  

  return 0;
}