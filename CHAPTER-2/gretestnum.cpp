#include<iostream>
using namespace std;
int main(){
    int a,b,c ;
    cout<<"inter the 1 number  :  ";
cin>>a;

cout<<"inter the 2 number      :    ";
cin>>b;

cout<<"inter the 3  number   :  ";
 cin>>c;

//  if (a>b  and a>c) 
//  cout<<"a is the gretest";

// else if (b>a  and b>c)
//   cout<<"b is the gretest ";

//   else
//   cout<<"c is the gretest ";





if (a>b)
   if (a>c) cout<<"a is the gretest";

   else cout<<"c id the gretest";

   else 
   if (b>c) cout<<"b is the gretesst ";

   else cout<<"c is the gretest";

}