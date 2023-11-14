#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int s , int e ){
  int mid = s+ (e -s)/2;
  while(s < e){
    if(arr[mid] >= arr[0]){
      return getPivot(arr, mid + 1, e);
    }
    else{
      return getPivot(arr, s , mid);
    }
  }
  return s;
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

  int i = getPivot(arr, s , n);
  cout << "Index of Pivot is: " << i << endl;
  cout << "Element at pivot index is: " << arr[i] << endl << endl;
}