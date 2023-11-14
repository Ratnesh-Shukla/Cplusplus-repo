#include <iostream>
using namespace std;

void swapAlternate(int arr[] , int size){
  // int odd = 1;
  // int even = 0;
  // int n = 0;
  // while(n <= size/2){
  //   swap(arr[even] , arr[odd]);
  //   odd += 2;
  //   even += 2;
  //   n++;
  // }
                        /*OR*/
  for(int i = 0 ; i < size ; i += 2){
    if(i+1 < size){
      swap(arr[i] , arr[i+1]);
    }
  }
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

  cout << " Array before alternate swapping -->>  ";
  printArray(num , n);

  swapAlternate(num , n);

  cout << " Array after alternate swapping -->>  ";
  printArray(num , n);

  return 0;
}