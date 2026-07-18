#include<iostream>
using namespace std;
int powr(int a , int b){
    if (b==0)return 1 ;
     if (b==1)return a;

    return    powr(a,b/2) * powr(a,b/2);
}
int main(){
    int a;
    cout<<"enter the a   :";
    cin>>a;

    int b;
    cout<<"enter the b";
    cin>>b;

    cout<<powr(a,b);
     
}
