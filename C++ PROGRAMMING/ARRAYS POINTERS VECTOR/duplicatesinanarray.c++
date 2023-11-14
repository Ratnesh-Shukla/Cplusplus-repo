                                /*QUESTION :- https://bit.ly/3dm6bdZ */
            /*TO CHECK THE CORRECTNESS OF CODE USE THE VALUES FROM THE PROBLEM STATEMENT*/

/*SOLUTION*/
#include <iostream>
using namespace std;

/*ONLY FUNCTION IS THE SOLUTION*/
int duplicateElement(int arr[] , int size){
  int ans = 0;
  /*in this case we are doing the XOR of all array elements*/
  for(int i = 0 ; i < size ; i++){
    ans = ans^arr[i];
  }             
  /*now, we are doing the XOR from 1 to n-1*/
  for(int i = 1 ; i < size ; i++){
    ans = ans^arr[i];
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

  printArray(num , n);

  int element = duplicateElement(num , n);

  cout << "Duplicate element in the array: " << element << endl << endl;
  return 0;
}