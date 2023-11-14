#include <iostream>
using namespace std;

void bubbleSort (int arr[] , int n){
  for (int i = 1 ; i < n ; i++){
    bool swapped = false;
    for(int j = 0 ; j < n-i ; j++){   //process element till (n-i)th index 
      if(arr[j] > arr[j+1]){
        swap (arr[j] , arr[j+1]);
        swapped = true;
      }      
    }
    if(swapped == false){    // optimization - already sortedN
      break;
    }
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

  bubbleSort(num, n);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}