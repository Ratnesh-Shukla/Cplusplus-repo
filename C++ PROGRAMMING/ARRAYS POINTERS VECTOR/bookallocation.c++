                            /* PROBLEM STATEMENT :~ : https://bit.ly/3GiCqY0 */

// SOLUTION 
#include <iostream>
using namespace std;

bool isPossible(int arr[] , int n , int m, int mid){
  int studentCount = 1;
  int pageSum = 0;
  for(int i = 0; i < n; i++){
    if(pageSum + arr[i] <= mid){
      pageSum += arr[i];
    }
    else{
      studentCount++;
      if(studentCount > m || arr[i] > mid){
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int allocateBooks(int arr[] , int n , int m){
  int s = 0;
  int sum = 0;

  for(int i = 0 ; i < n ; i++){
    sum += arr[i];
  }

  int e = sum;
  int ans = -1;
  int mid = s + (e - s)/2;
  while(s <= e){
    if(isPossible(arr, n, m, mid)){
      ans = mid;
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

void printArray(int arr[], int size){
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
}


int main(){
  int n , m;
  cout << endl << "Enter the pages of book: ";
  cin >> n;

  cout << endl;

  cout << "Enter the number of students : ";
  cin >> m;

  cout << endl;

  int num[100];
  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < n; i++){
    cout << "Element " << i <<" : ";
    cin >> num[i];
  }
  
  cout << endl;

  printArray(num , n);

  cout << "Minimum no among the maximum no of pages assigned to student : " << allocateBooks(num , n , m) << endl << endl;
  return 0;
}