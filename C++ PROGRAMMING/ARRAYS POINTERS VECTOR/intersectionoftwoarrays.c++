                               /*QUESTION :- https://bit.ly/3Il0c7n */
            /*TO CHECK THE CORRECTNESS OF CODE USE THE VALUES FROM THE PROBLEM STATEMENT*/

/*SOLUTION*/
#include <iostream>
using namespace std;

/*ONLY FUNCTION IS THE SOLUTION*/
int intersectionElements(int arr1[] , int size1 , int arr2[] , int size2){
  int ans = 0;
  /*According to question this solution exceeds the time limit*/
  
  // for(int i = 0 ; i < size1 ; i++){
  //   int element = arr1[i];
  //   for(int j = 0 ; j < size2 ; j++){
  //     if(element == arr2[j]){
  //       ans = element;
  //       cout << ans << " ";
  //       arr2[j] = INT_MIN;
  //       break; 
  //     }
  //   }
  // }

  /*Optimised solution  -->> it is known as two pointer approach*/         
  int i = 0, j = 0;
  while (i < size1 && j < size2){
    if(arr1[i] == arr2[j]){
      ans = arr1[i];
      cout << ans << " ";
      i++;
      j++;
    }

    else if(arr1[i] < arr2[j]){
      i++;
    }

    else{
      j++;
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
  cout << endl << "Enter the size of first array: ";
  cin >> n;

  cout << endl;

  int num1[100];
  enterElement(num1 , n);

  cout << endl;
  
  cout << "First array :-  ";
  printArray(num1 , n);
  
  int m;
  cout << endl << "Enter the size of second array: ";
  cin >> m;

  cout << endl;

  int num2[100];
  enterElement(num2 , m);

  cout << endl;
  
  cout << "Second array :-  ";
  printArray(num2 , m);
  
  cout << "Elements of intersection :-  ";
  intersectionElements(num1 , n , num2 , m);
  
  return 0;
}