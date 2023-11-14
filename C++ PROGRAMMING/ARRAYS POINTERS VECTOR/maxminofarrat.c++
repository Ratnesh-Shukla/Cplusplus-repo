#include <iostream>
using namespace std;

int getMax(int arr[] , int size) {
  // int max = INT_MIN;
  // for(int i = 0; i < size; i++){
  //   if(arr[i] > max){
  //     max = arr[i];
  //   }
  // }
  // return max;
                           /*OR*/
  int maxi = INT_MIN;
  for(int i = 0; i < size; i++){
    maxi = max(maxi, arr[i]);
  }
  return maxi;
}

int getMin(int arr[], int size){
  // int min = INT_MAX;
  // for(int i = 0; i < size; i++){
  //   if(arr[i] < min){
  //     min = arr[i];
  //   }
  // }
  // return min;
                           /*OR*/
  int mini = INT_MAX;
  for(int i = 0; i < size; i++){
    mini = min(mini, arr[i]);
  }
  return mini;

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

  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    cout << num[i] << " ";
  }
  cout << "]" << endl << endl;

  cout << "Maximum value: " << getMax(num , n) << endl;
  cout << "Minimum value: " << getMin(num , n) << endl << endl;
}