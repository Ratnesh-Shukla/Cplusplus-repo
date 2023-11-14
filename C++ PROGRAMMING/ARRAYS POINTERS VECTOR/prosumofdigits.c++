#include <iostream>
using namespace std;
int main()
{
  int n, a = 0, b = 1 ;
  cout << "Enter the value of n: ";
  cin >> n;
  while (n != 0)
  {
    int digit = n % 10;
    a = a + digit;
    b = b * digit;
    n /= 10;
  }
  
  cout << "Sum: " << a << endl;
  cout << "Product: " << b << endl;
  cout << "Result: " << b - a << endl;
  return 0;

}