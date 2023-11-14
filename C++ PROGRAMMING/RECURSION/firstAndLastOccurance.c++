#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int s, int e , int key){
  if(s > e){
    return -1;
  }  
  int mid = s + (e-s)/2;
  if(arr[mid] == key){
    int ans = firstOccurance(arr, s, mid - 1, key);
    return (ans == -1) ? mid : ans;
  }
  if(arr[mid] > key){
    return firstOccurance(arr,s,mid-1,key);
  }
  else{                              /* i.e. arr[mid] < key */
      return firstOccurance(arr,mid+1,e,key);
  }
}
int lastOccurance(int arr[], int s , int e, int key){
  if(s > e){
    return -1;
  }
  int mid = s + (e-s)/2; 
  if(arr[mid] == key){
    int ans = lastOccurance(arr, mid+1, e, key);
    return (ans == -1)? mid : ans;
  }
  if(arr[mid] > key){
    return lastOccurance(arr, s, mid-1, key);
  }
  else{
    return lastOccurance(arr, mid+1, e, key);
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
  cout << endl << "First of occurance of key is at index: " << firstOccurance(arr, s, n-1,key) << endl;
  cout << "Last of occurance of key is at index: " << lastOccurance(arr, s, n-1,key) << endl;
}