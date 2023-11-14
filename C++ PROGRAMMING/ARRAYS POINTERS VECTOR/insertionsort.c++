#include <iostream>
using namespace std;

void insertionSort(int arr[] , int n){
  for(int i = 1 ; i < n ; i++){
    int temp = arr[i];
    int j = i - 1;
    while(j >= 0){
      if(arr[j] > temp){
        arr[j+1] = arr[j];
      }
      else{
        break;
      }
      j--;
    }
    arr[j+1] = temp;
  }
}

void printArray(int arr[], int size)
{
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl
       << endl;
}
int main()
{
  int n;
  cout << endl << "Enter the size of array: ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "Enter the elements of array:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i << " : ";
    cin >> num[i];
  }

  cout << endl;

  cout << " Array before sorting -->>  ";
  printArray(num, n);

  insertionSort(num, n);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}