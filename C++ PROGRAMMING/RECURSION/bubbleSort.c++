#include <bits/stdc++.h>
using namespace std;

void bubble(int *arr, int n){
  if(n == 0 || n == 1){
    return;
  }
  for(int i = 0; i < n-1; i++){ // here we use n-1 so that our we can access the last element while comparing
    if(arr[i] > arr[i+1]){
      swap(arr[i] , arr[i+1]);
    }
  }
  bubble(arr, n-1);
}
void printArray(int arr[], int size)
{
  cout << "[ ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "]" << endl
       << endl;
}
int main()
{
  int n;
  cout << endl << "Enter the size of array: ";
  cin >> n;

  cout << endl;

  int num[100];
  cout << "Enter the elements of array:" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "Element " << i << " : ";
    cin >> num[i];
  }

  cout << endl;

  cout << " Array before sorting -->>  ";
  printArray(num, n);

  bubble(num, n);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}