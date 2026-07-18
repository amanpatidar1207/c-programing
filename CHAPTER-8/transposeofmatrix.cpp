#include<iostream>
using namespace std;
int main (){

    int arr[2][3];  // ye do row or 3  collom ban gaye hai 
arr[0][0] = 1;
arr[0][1] = 2;
arr[0][2] = 4;
arr[1][0] = 6;
arr[1][1] = 8;
arr[1][2] = 10;

for (int j=0;j<3;j++){
    for(int i=0;i<2;i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}