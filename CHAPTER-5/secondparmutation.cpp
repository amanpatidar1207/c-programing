#include<iostream>
using namespace std;
int main(){

 int n;
    cout<<"inter the n  : ";
    cin>>n;

    int r;
cout<<"enter the r   :  ";
cin>>r;

int a = 1;
for (int i = 1; i<=n;i++){
    a *= i;
}
int b = 1;
for (int i = 1;i<=n-r;i++){
    b *=i;
}
cout<<a/b;
}