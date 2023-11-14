#include <iostream>
using namespace std;

void moveZeros(int arr[] , int n){
  int nonZero = 0; /* shifts all non zero value to the left */
  for(int j = 0; j < n; j++){
    if(arr[j] != 0){
      swap(arr[j], arr[nonZero]);
      nonZero++;
    }
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

  cout << " Array before moving zeros -->>  ";
  printArray(num , n);

  moveZeros(num , n);

  cout << " Array after moving zeros -->>  ";
  printArray(num , n);

  return 0;
}