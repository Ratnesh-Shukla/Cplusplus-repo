#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
  int row = matrix.size();
  cout << "[";
  for (int i = 0; i < row; i++) {
    cout << "[";
    for (int j = row - 1; j >= 0; j--) {
      cout << matrix[j][i] << ",";
    }
  cout << "\b],";
  }
  cout << "\b]";
}

int main() {
  int row, col, a;
  cout << "Enter the value of row: ";
  cin >> row;
  cout << "Enter the value of column: ";
  cin >> col;
  

  vector<vector<int>> arr(row, vector<int>(col));
  
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < row; i++) {  
    for (int j = 0; j < col; j++) {
      int z = i;
      int b = j; 
      cout << "Element [" << ++z << "][" << ++b << "] = ";
      cin >> a;
      arr[i][j] = a; 
    }
  }
  
  cout << "2D Array:" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  cout << "Matrix after rotation:- "<< endl;
  rotate(arr);
  return 0;  
}
