#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){
  int mid = s + (e-s)/2;
  // calculating the size of two arrays obtained
  int len1 = mid - s +1;
  int len2 = e - mid;
  // creating two arrays dynamically
  int *first = new int[len1];
  int *second = new int[len2];
  // copying the values from the array to our two newly created arrays
  // index is assigned to s so that we can traverse all the values of main array till mid
  int index = s;   
  for(int i = 0; i < len1; i++){
    first[i] = arr[index++];
  } 
  // index is assigned to new variable to copy the values after mid into the second array
  index = mid + 1;
  for(int i = 0; i < len2; i++){
    second[i] = arr[index++];
  }
  // two sorted arrays are created and now we have to merge both sorted arrays
  int firstIndex = 0;
  int secondIndex = 0;
  int arrIndex = s;
  // we will merge elements of two sorted arrays by comparing their elements
  while(firstIndex < len1 && secondIndex < len2){
    if(first[firstIndex] < second[secondIndex]){
      arr[arrIndex++] = first[firstIndex++];
    }
    else{
      arr[arrIndex++] = second[secondIndex++];
    }
  }
  // if all the elements of second array are exhaustd then we can copy remaining elements of first array
  while(firstIndex < len1){
    arr[arrIndex++] = first[firstIndex++];
  }
  // if all the elements of first array are exhaustd then we can copy remaining elements of second array
  while(secondIndex < len2){
    arr[arrIndex++] = second[secondIndex++];
  }
  // freeing the dynamically allocated memory
  delete []first;
  delete []second;
}

void mergeSort(int arr[], int s, int e){
  // base condition 
  // if s = e then both s and e points to the single element; but single element is already sorted 
  // if s > e then the array is empty
  if(s >= e){
    return;
  }
  int mid = s + (e-s)/2;
  // sorting left part of the main array
  mergeSort(arr, s, mid);
  // sorting the right part of the array
  mergeSort(arr, mid+1, e);
  // merging two sorted arrays
  merge(arr, s, e);
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

  mergeSort(num, s, n-1);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}