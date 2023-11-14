                               /*PROBLEM STATEMENT :~ https://bit.ly/3dkuQ2B */

// SOLUTION
#include <iostream>
#include <algorithm>         // this library is used for sort to work 

using namespace std;

bool isPossible(int arr[] , int size, int k , int mid){
  int cowCount = 1;
  int lastPos = arr[0];
  for(int i = 0; i < size ; i++){
    if(arr[i] - lastPos >= mid){
      cowCount++;
      if(cowCount == k){
        return true;
      }
      lastPos = arr[i]; 
    }
  }
  return false;
}

int aggressiveCows(int arr[], int size, int k){
  sort(arr, arr + size);          // it is an pointer approach to sort an array
  int s = 0;
  int maxi;
  for(int i = 0; i < size; i++){
    maxi = max(maxi , arr[i]);
  }
  int e = maxi;
  int ans = -1;
  int mid = s + (e - s)/2;
  while(s <= e){
    if(isPossible(arr,size, k , mid)){
      ans = mid;
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

void printArray(int arr[] , int size){
  cout << "[ ";
  for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
}

int main(){
  int n ;
  cout << endl << "ENTER THE NUMBER OF STALLS : ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "ENTER THE DISTANCE BETWEEN STALLS:" << endl;
  for(int i = 0 ; i < n ; i++){ 
    cout << "Element " << i << " : ";
    cin >> num [i];
  }
  
  cout << endl;

  cout << "STALL DISTANCE -->>  ";
  printArray(num , n);

  int key;
  cout << "ENTER THE NUMBER OF COWS : ";
  cin >> key;

  cout << endl;

  cout << "Largest minimum distance between " << key << " cows is : " << aggressiveCows(num , n , key) << endl << endl;

  return 0;
}