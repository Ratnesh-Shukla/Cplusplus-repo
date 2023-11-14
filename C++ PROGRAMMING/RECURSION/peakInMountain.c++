#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int s, int e){
  while(s < e){
    int mid = s + (e-s)/2;
    if(arr[mid] < arr[mid + 1]){
      return findPeak(arr, mid+1 , e);
    }
    else{
      return findPeak(arr, s, mid);
    }
  }
  return e;
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
  cout << "Index of the peak element is: " << findPeak(arr, s, n-1) << endl;
}
