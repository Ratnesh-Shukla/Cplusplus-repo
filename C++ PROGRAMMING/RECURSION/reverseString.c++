#include <bits/stdc++.h>
using namespace std;
void revString(string& str, int s, int e){
  if(s > e){
    return;
  }
  swap(str[s], str[e]);
  revString(str, ++s, --e);
}

int main(){
  string str;
  cout << "Enter string: "; 
  cin >> str;
  int n = str.length();
  revString(str, 0, n-1);
  cout << str << endl;
  return 0;
}