#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[3][2] = {{1,74},{2,78},{3,86}};
     int sum = 0;

     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            sum += arr[i][j];

        }
     }
 cout<<sum<<" ";
}