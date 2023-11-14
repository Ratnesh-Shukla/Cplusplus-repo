                             /*QUESTION :- https://bit.ly/3EwlU6e */
            /*TO CHECK THE CORRECTNESS OF CODE USE THE VALUES FROM THE PROBLEM STATEMENT*/

/*SOLUTION*/
#include <iostream>
using namespace std;

/*ONLY FUNCTION IS THE SOLUTION*/
int pairs(int arr[] , int size , int s){
  int ans = 0;
  for(int i = 0 ; i < size ; i++){
    for(int j = i + 1 ; j < size ; j++){
      if(arr[i] + arr[j] == s){
        // int temp;
        ans = min(arr[i] , arr[j]);
        cout << ans << " ";
        ans = max(arr[i] , arr[j]);
        cout << ans << " " << endl;
      }
    }
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

void enterElement(int arr[] , int size){

  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < size; i++){
    cout << "Element " << i <<" : ";
    cin >> arr[i];
  }
}


int main(){
  int n;
  cout << endl << "Enter the size of array: ";
  cin >> n;

  cout << endl;

  int num[100];
  enterElement(num , n);

  cout << endl;
  
  cout << "Array :-  ";
  printArray(num , n);

  cout << endl;
  int key;
  cout << "Enter the sum : ";
  cin >> key;

  cout << endl;
  
  cout << "Pairs :-  ";
  pairs(num , n , key);
  
  return 0;
}