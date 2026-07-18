#include<iostream>
using namespace std;
int main(){

int n;
cout<<"inter the nummber     :";

cin>>n;

bool x=true;
for (int i=2; i<=n/2;i++){
    x=false;
    break;

} 
if (n==1 ) cout<<"not prime nor composit";

else if (x==true)
   cout<<"prime";
   
   else
   cout<<"composite";


}
 