#include <bits/stdc++.h>
using namespace std;

int main(){
                      /* Different ways of taking input into 1D vector in C++ */
  // The basic way is if the user will give the size of the vector then we can take input into vector simply using for loop.

  int n; 
    cin>>n; // taking size of vector from user
    int a;
    vector<int> v;
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;

    // If the user will not enter the size of the vector but the user wants to enter vector elements as much as they want.

  int b;
   vector<int> t;
   // user can add element as much as they want
   while(cin>>b)
   { 
       t.push_back(b);
   }
   for(auto &p : v)
   {
      cout<<p<<" ";
   }
   cout<<endl;

                           /* Take user input into 2D vector in C++ */
  // vector<vector<int>> v;
  //   int row, column, a;
  //   cin>>row;
  //   // taking input into 2D vector from user
  //   for(int i=0 ; i<row ; i++) {
  //        cin>>column;
  //        vector<int> p;
  //        for(int j=0 ; j<column ; j++) {
  //             cin>>a;
  //             p.push_back(a);
  //        }
  //        v.push_back(p);
  //   }
  //   // displaying 2D vector value
  //   for(auto q: v) {
  //       for(auto it: q) {
  //           cout<<it<<" ";
  //        } 
  //        cout<<endl;
  //    }
      return 0;
}