#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k){
  vector<int> temp(nums.size());
  for(int i = 0; i < nums.size(); i++){
    temp[(i + k) % nums.size()] = nums[i];
  }
  nums = temp;

}

void printArray(vector<int> &arr, int n) {
  cout << "[ ";
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
}

int main(){
  int n , a;
  cout << endl << "Enter the size of Array: ";
  cin >> n;

  cout << endl;

  vector<int> v;
  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i<n; i++){
    cout << "Element " << i <<" : ";
    cin >> a;
    v.push_back(a);
  }

  cout << endl;

  cout << " Array before rotating -->> ";
  printArray(v, n);

  int k;
  cout << "Enter the value of key : ";
  cin >> k;
  cout << endl;

  rotate(v, k);

  cout << " Array after rotating -->> ";
  printArray(v, n);

  return 0;
}