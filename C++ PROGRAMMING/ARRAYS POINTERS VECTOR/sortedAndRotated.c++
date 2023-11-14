#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums){
  int count = 0;
  int n = nums.size();
  for(int i = 1; i < n; i++){
    if(nums[n - 1] > nums[i]){
      count ++;
    }
  }
  if(nums[n -1] > nums[0]){
    count ++;
  }
  return count <= 1;
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

  int j = check(v);
  cout << "Is array sorted and rotated : " << j << endl << endl;

  return 0;
}