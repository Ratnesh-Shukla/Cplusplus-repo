#include <iostream>
using namespace std;

int pivotElement(int arr[] , int size){
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
  cout << "ENTER THE ELEMENTS OF ROTATED ARRAY " << endl;
  for(int i = 0 ; i < n ; i++){ 
    cout << "Element " << i << " : ";
    cin >> num [i];
  }
  
  cout << endl;

  cout << " ARRAY -->>  ";
  printArray(num , n);

  cout << endl;
  
  cout << "Index of pivot element in the rotated array : " << pivotElement(num , n) << endl << endl;  

  return 0;
}