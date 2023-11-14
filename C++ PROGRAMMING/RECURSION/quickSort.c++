#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
  int pivot = arr[s];   // considering the first element of the array as pivot
  int count = 0;   // traversing the array elements to count number of elements which are less than the pivot element
  for(int i = s+1; i<=e; i++){  // here i=s+1 bcoz we alewady have assumed the first element of the array to be pivot
    if(arr[i] <= pivot){
      count++;
    }
  }
  // placing pivot at right position
  int pivotIndex = s+count;   // correct index of pivot is obtained
  swap(arr[pivotIndex], arr[s]); 
  // now sorting left and right parts of the pivot 
  int i = s;
  int j = e;
  while(i < pivotIndex && j > pivotIndex){
    // if the remaining elements follow the condition then
    while(arr[i] <= pivot){  //left part
      i++;
    }
    while(arr[j] > pivot){   //right side
      j--;
    }
    if(i < pivotIndex && j > pivotIndex){
      swap(arr[i++], arr[j++]);
    }
  }
  return pivotIndex;
}

void quickSort(int *arr, int s, int e){
  if(s>=e){
    return ;
  }
  int p = partition(arr, s, e);
  quickSort(arr, s, p-1); // sorting left part
  quickSort(arr, p+1, e); // sorting right part
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
  int s = 0;
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

  quickSort(num, s, n-1);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}