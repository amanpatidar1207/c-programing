#include<iostream>
using namespace std;
int main(){
    cout<<"inter the parsantage      :   ";
    int n ;
    cin>>n;
    
    if (n>=81    and    n<=100)
    cout<<"verry good ";

    else if (n>=61   and   n<=80)  //isle jagah (n>=61)likhta tobhi chalta 
    cout<<"good ";

    else if ( n>=41   and  n<=60)  //sle jagah (n>=41)likhta tobhi chalta 
      cout<<"avrage";
      
      else 
      cout<<"fail bahar nikalo";
}