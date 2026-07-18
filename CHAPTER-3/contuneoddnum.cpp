#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"inter the number n    :";
    cin>>n;

    for (int i = 1 ; i<=n;i++){
         if ( i%2==0) continue;     // for print odd number by contune step
        cout<<i<<"  ";
    }




    for (int i=1; i<=20; i++){
      if(i==2  || i==3  || i==7)continue;
    cout<<i<<"  ";
  
}
}