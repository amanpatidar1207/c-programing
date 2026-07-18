#include<iostream>
using namespace std;
int main(){
     int x = 5 ;
     cout<<&x<<endl;   // x ka address print o raha hai ye to 
     int* p = &x;  //  same addaress ko print ya store karke rakhta hai ye 
     cout<<p<<endl;     // same address print ho raha hai 
    cout <<*p<<endl;     // *p se iski andar jake vapas value dhund ke layega 
    cout<<x<<endl;       //  ye x ki actual value printn hogi 

}