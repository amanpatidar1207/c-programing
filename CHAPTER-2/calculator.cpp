#include<iostream>
using namespace std;
int main()
{ 
    cout <<"inter yhe number in calculator     :   ";
    int n1;
    cin>>n1;
    char(op);
    cin>>op;
    int n2;
    cin>>n2;
 
    if (op=='+') cout<<n1+n2;
    if (op=='-') cout<<n1-n2;
    if (op=='*') cout<<n1*n2;
    if (op=='/') cout<<n1/n2;
}