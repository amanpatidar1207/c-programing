#include<iostream>
using namespace std;
int main(){
//aagar ham mane iki ap kuch ese hai to ye kuch ese hogi 
//  1,4,7,10,13..........nth term 

int n;
cin>>n;

// for (int i=1 ;i<=3*n-2;i=i+3)
// cout<<i<<"   ";
//ek alternative tarikhe bhi hai iske jho esa hi kam karta haio par without maths 

int a=1 ;
for (int i=1;i<=n;i++)
{

    cout <<a<<"  ";
 a = a+3;

}


}
// ye carlu breacket lagane zaruri hai jab aap aache coder bnna chaho to 