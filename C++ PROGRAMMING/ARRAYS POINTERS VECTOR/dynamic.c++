#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of size of 2D array: ";
  cin>>n;
  // creating 2D Array
  int**arr = new int*[n];
  for(int i = 0; i< n; i++){
    arr[i] = new int[n];
  }
  //Input 
  cout << endl << "Enter the elements of array:" << endl;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cin >> arr[i][j];
    }
  }
  //Output
  cout << endl << "Array ->"<< endl;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  //Releasing memory
  for(int i =0; i<n; i++){
    delete []arr[i];
  }
  delete []arr;
  return 0;
}