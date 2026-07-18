#include<iostream>
using namespace std;
int main(){

    int a ;
    cout<<"inter the a       :  ";
    cin>>a;

    
    for (int i=1; i<=a; i++){
        for (int j=1; j<=i;j++){
            cout<< (char)(j+64) ;  //isko aap koi simbole bhi prit karwa sakte ho ya charactor bhi or alternating number bhi sab hoga 
        }
        cout<<endl;   // char ke liye ye       or numbers ke liye j ko print kar wa do nahi to 
                                              //aap ko alternating cahiye to ap isko i print kar do 
    }
}