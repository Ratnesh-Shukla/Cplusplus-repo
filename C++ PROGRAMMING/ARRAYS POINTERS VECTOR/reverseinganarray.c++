#include <iostream>
using namespace std;

void reverseArray(int arr[] , int size){
  int start = 0;
  int end = size - 1;
  while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
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

  cout << " Array before reversing -->>  ";
  printArray(num , n);

  reverseArray(num , n);

  cout << " Array after reversing -->>  ";
  printArray(num , n);

  return 0;
}