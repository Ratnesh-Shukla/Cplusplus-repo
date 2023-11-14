#include <iostream>

using namespace std;

int main ()
{
  cout << "Enter your name: "<< endl;
  string characterName;
  cin >> characterName;
  
  cout << "Enter your age" << endl;
  int characterAge;
  cin >> characterAge;

  cout << characterName << " is " << characterAge << " years old. " << endl;
  
  return 0;
}