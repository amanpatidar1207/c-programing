#include<iostream>
using namespace std;
int main(){

    int a ;
    cout<<"inter the a       :  ";
    cin>>a;

    
    for (int i=1; i<=a; i++){
        for (int j=a;  j>=i;j--){
            cout<<j;  
        }
        cout<<endl;   // char ke liye ye       
    }
}