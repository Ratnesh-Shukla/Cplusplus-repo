#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k){
  int temp[n];
  for(int i = 0; i < n; i++){
    temp[(i + k) % n] = arr[i];
  }
  for(int i = 0; i < n; i++){            //used to copy the elements 
    arr[i] = temp[i];
  }
}

void printArray(int arr[], int size){
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
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

  cout << " Array before rotating -->>  ";
  printArray(num , n);

  int k;
  cout << "Enter the value of key : ";
  cin >> k;
  cout << endl;

  rotate(num , n , k);

  cout << " Array after rotating -->>  ";
  printArray(num , n);

  return 0;
}
