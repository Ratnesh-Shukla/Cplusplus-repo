#include <iostream>
using namespace std;

void merge(int arr1[] , int n , int arr2[] , int m , int arr3[]){
  int i = 0; 
  int j = 0;
  int k = 0;
  while(i < n && j < m){
    if(arr1[i] < arr2[j]){
      arr3[k] = arr1[i];
      k++;
      i++;
    }
    else{
      arr3[k] = arr2[j];
      k++;
      j++;
    }
  }
  while(i < n){
    arr3[k] = arr1[i];
    k++;
    i++;
  }
  while(j < m){
    arr3[k] = arr2[j];
    k++;
    j++;
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

void enterElement(int arr[] , int size){

  cout << "Enter the elements of array:" << endl;
  for(int i = 0; i < size; i++){
    cout << "Element " << i <<" : ";
    cin >> arr[i];
  }
}


int main(){
  int n;
  cout << endl << "Enter the size of first array: ";
  cin >> n;

  cout << endl;

  int num1[100];
  enterElement(num1 , n);

  cout << endl;
  
  int m;
  cout << endl << "Enter the size of second array: ";
  cin >> m;

  cout << endl;

  int num2[100];
  enterElement(num2 , m);

  cout << endl;
  
  cout << "First array :-  ";
  printArray(num1 , n);

  cout << "Second array :-  ";
  printArray(num2 , m);
  int mn = m + n;
  int num3[100];
  
  merge(num1 , n , num2 , m , num3);
  cout << "Merged Array :-  ";
  printArray(num3, mn);
  
  return 0;
}