#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{
  int left = 0;
  int right = size - 1;
  while (left < right)
  {
    while (arr[left] == 0 && left < right)
    {
      left++;
    }
    while (arr[right] == 1 && left < right)
    {
      right--;
    }
    if (left < right)
    {
      swap(arr[left], arr[right]);
      left++;
      right--;
    }
  }
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
  cout << endl
       << "Enter the size of array: ";
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

  sort01(num, n);

  cout << " Array after sorting -->>  ";
  printArray(num, n);

  return 0;
}