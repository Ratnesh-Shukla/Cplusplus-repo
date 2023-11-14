#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str, int s, int e){
  if(s > e){
    return true;
  }
  if(str[s] != str [e]){
    return false;
  }
  else{
    return checkPalindrome(str, ++s, --e);
  }
}


 int main(){
  string str;
  cout << endl << "Enter string: "; 
  cin >> str;
  int n = str.length();
  int check = checkPalindrome(str, 0, n-1);
  if(check){
    cout << "String is a Palindrome" << endl << endl;
  }
  else{
    cout << "String is not a Palindrome" << endl << endl;
  }
  return 0;
}