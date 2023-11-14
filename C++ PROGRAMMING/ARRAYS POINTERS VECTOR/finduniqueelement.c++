              /*It is the solution of question on :-  https://bit.ly/3y01Zdu  */

        /*TO CHECK THE CORRECTNESS OF CODE USE THE VALUES FROM THE QUESTION STATEMENT*/

#include <iostream>
using namespace std;

/*ONLY FUNCTION IS THE SOLUTION*/
int uniqueElement(int arr[] , int size){
  int ans = 0;
  for(int i = 0 ; i < size ; i++){
    ans = ans^arr[i];                // using XOR operator
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

  int element = uniqueElement(num , n);

  cout << "Unique element in the array: " << element << endl << endl;
  return 0;
}