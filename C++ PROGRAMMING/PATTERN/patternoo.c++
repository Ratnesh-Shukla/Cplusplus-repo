#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for(int j = n; j >= i; j--){
      cout << " ";
    }
    for(int l = 0; l < i+1 ; l++){
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = n ; i >= 0; i--)
  {
    for(int j = i; j <= n; j++){
      cout << " ";
    }
    for(int l = i+1; l > 0 ; l--){
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
