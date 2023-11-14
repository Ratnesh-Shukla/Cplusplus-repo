#include<bits/stdc++.h>
using namespace std;

void printSum(int arr[][50], int row, int col){
  cout << "Printing sum of rows:" << endl;
  for(int i = 1; i <= row; i++) {
    int sum = 0;
    for (int j = 1; j <= col; j++) {
      sum += arr[i][j]; 
    }
    cout << "Row " << i << " : " << sum << endl;
  }
  cout << endl;
}

int main(){
  int row, col;
  cout << endl << "Enter the value of row: ";
  cin >> row;
  cout << "Enter the value of column: ";
  cin >> col;
  int arr[50][50];
  cout << endl << "Enter the elements of array: " << endl << endl;
  for(int i = 1; i <= row; i++){
    for (int j = 1; j <= col; j++){
      cout << "Element [" << i <<"][" << j << "] = ";
      cin >> arr[i][j]; 
    }
  }
  cout << endl << "2D Array :- " << endl << endl;
  for(int i = 1; i <= row; i++){
    for (int j = 1; j <= col; j++){
      cout << arr[i][j] << " "; 
    }
    cout << endl;
  }
  cout << endl;
  printSum(arr, row, col);
}