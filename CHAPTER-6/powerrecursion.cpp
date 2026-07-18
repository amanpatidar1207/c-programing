#include<iostream>
using namespace std;
int  powr(int a , int b ){
    if (b==0)return 1 ;
    return  a * powr(a , b-1);

     
}
int main (){
   int a;
   cout<<" inter the number     :";
   cin>>a;

   int b ;
   cout<<"inter power number   : ";
   cin>>b;

   cout<<powr(a,b);
}