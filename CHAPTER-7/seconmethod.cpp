#include<iostream>
using namespace std;
int main (){
    cout<<"inter the number in the b0x (x)    :";
    int x[5];   
for (int i = 0;i<5;i++){
            cin>>x[i];     // ye is me ham input de sak te hai 
        }

          for (int i = 0;i<=4;i++){
    cout<<x[i]<<"  ";    // asagr ham ise change karna chahe to kar sajte hai 
        }
            x[0] = 100;
  cout<<endl;
                 // isse change karne par ye update ho jata hai 
for (int i = 0;i<=4;i++){
            cout<<x[i]<<"  "; 
          }

}
              
  