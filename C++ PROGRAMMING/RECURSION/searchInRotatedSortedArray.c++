#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int s , int e){
  int mid = s + (e-s)/2;
  while(s<e){
    if(arr[mid] >= arr[0]){
      return getPivot(arr, mid+1, e);
    }
    else{
      return getPivot(arr, s , mid);
    }
  }
  return s;
}

int binarySearch(int arr[], int s , int e, int key){
  if(s>e){
    return -1;
  }
  int mid = s + (e-s)/2;
  if(arr[mid] == key){
    return mid;
  }
  if(arr[mid] < key){
    return binarySearch(arr, mid+1, e , key);
  }
  else{
    return binarySearch(arr, s, mid-1, key);
  }
}

int findPosition(int arr[], int s , int e, int key){
  int pivot = getPivot(arr, s, e);
  if(arr[pivot] <= key && key <= arr[e]){
    return binarySearch(arr, pivot, e, key);
  }
  else{
    return binarySearch(arr, s, pivot -1, key);
  }
}
int main(){
  int n;
  int s =0;
  int arr[100];
  cout << endl <<"Enter the size of the array: ";
  cin >> n;
  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < n; i++){
    cout << "Element " << i <<" : ";
    cin >> arr[i];
  }
  
  cout << endl << endl <<"Array --> [ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ,";
  }
  cout << "\b]" << endl << endl;
  int key;
  cout << "Enter the value of key: ";
  cin >> key;
  int i = findPosition(arr, s , n, key);
  cout << "Index of Pivot is: " << i << endl;
}