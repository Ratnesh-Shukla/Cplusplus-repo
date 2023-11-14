#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
  int s = 0;
  int e = v.size() - 1;
  while(s < e){
    swap(v[s++] , v[e--]);
  }
  return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m){
  int i = n-1;
  int j = m-1;
  vector<int> ans;
  int carry = 0;
  while(i >= 0 && j >= 0){
    int val1 = a[i];
    int val2 = b[j];
    int sum = val1 + val2 + carry;
    carry = sum/10;
    sum = sum % 10;
    ans.push_back(sum);
    i--;
    j--;
  }
  while(i >= 0){
    int sum = a[i] + carry;
    carry = sum/10;
    sum = sum % 10;
    ans.push_back(sum);
    i--;
  }
  while(j >= 0){
    int sum = b[j] + carry;
    carry = sum/10;
    sum = sum % 10;
    ans.push_back(sum);
    j--;
  }
  while(carry != 0){
    int sum = carry;
    carry = sum/10;
    sum = sum % 10;
    ans.push_back(sum);
  }
  return reverse(ans);
}

void printArray(vector<int> &arr, int n){
  cout <<"[ ";
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << "]" << endl << endl;
}

void enterElement(vector<int> &arr, int n){
  int a;
  for(int i = 0; i< n; i++){
    cout << "Element " << i << " : ";
    cin >> a;
    arr.push_back(a);
  }
  cout << endl;
}

int main(){
  int n , m;
  cout << endl << "Enter the size of first array: ";
  cin >> n;

  cout << endl;

  vector<int> v;
  cout << "Enter the elemets of array:" << endl;
  enterElement(v, n);

  cout << "Enter the size of second array: ";
  cin >> m;

  cout << endl;

  vector<int> s;
  cout << "Enter the elements of second array:"<< endl;
  enterElement(s, m);

  cout << "First Array -->> "; 
  printArray(v, n);

  cout << "Second Array -->> ";
  printArray(s, m);

  vector<int> e; 
  e = findArraySum(v,n,s,m);
  cout << "Array after sum -->> ";
  cout << "[ ";
  for(auto &p : e)
   {
      cout<<p<<" ";
   }
   cout << "]";

   cout<<endl << endl;
   return 0;
}