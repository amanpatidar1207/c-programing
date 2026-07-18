#include<iostream>
using namespace std;
int main (){
    int x[5];  // ye arres hai isme haM chize save karke rakh sakte hai like ye ek bade box ke jesa kam karega ;

    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    x[3] = 40;
    x[4] = 50;

          //aab hm ise cout ka use karke bhi kar sakte hai par ham ise loop se karna behtar hoga 

          for (int i = 0;i<5;i++){
            cout<<x[i]<<endl;
          }
}