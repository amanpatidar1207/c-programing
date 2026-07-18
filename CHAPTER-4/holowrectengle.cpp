#include<iostream>
using namespace std;
int main(){

    int a ;
    cout<<"inter the a";
    cin>>a;

    int b;
    cout<<"inter the b";
    cin>>b;

    for (int i=1; i<=a; i++){
        for (int j=1; j<=b;j++){
            if((i==1  ||  i==a)  ||  (j==1   ||  j==b)  )
            cout<<"*"<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
}