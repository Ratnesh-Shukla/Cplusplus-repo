#include <iostream>
using namespace std;

int firstPosition(int arr[] , int size , int key){
  int s = 0 , e = size-1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      e = mid - 1;
    }
    else if(arr[mid] < key){
      s = mid + 1;
    }
    else{
      e = mid - 1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}
int lastPosition(int arr[] , int size , int key){
  int s = 0 , e = size-1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s <= e){
    if(arr[mid] == key){
      ans = mid;
      s = mid + 1;
    }
    else if(arr[mid] < key){
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
  cout << endl << "ENTER THE SIZE OF ARRAY : ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "ENTER THE ELEMENTS OF ARRAY (in ascending order):" << endl;
  for(int i = 0 ; i < n ; i++){ 
    cout << "Element " << i << " : ";
    cin >> num [i];
  }
  
  cout << endl;

  cout << " ARRAY -->>  ";
  printArray(num , n);

  int key;
  cout << "ENTER THE KEY : ";
  cin >> key;

  cout << endl;

  cout<< "Index of first occurance of key is at : " << firstPosition(num , n , key) << endl;
 
  cout<< "Index of last occurance of key is at : " << lastPosition(num , n , key) << endl << endl;

  int a = firstPosition(num , n , key);
  int b = lastPosition(num , n , key);

  int total = (b - a) + 1;
  cout <<  "Total number of occurance = " << total << endl << endl;
  return 0;
}