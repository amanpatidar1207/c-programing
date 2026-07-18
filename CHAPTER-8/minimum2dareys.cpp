#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[3][2] = {{1,74},{2,78},{3,86}};
    int minimum = INT_MAX;
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            minimum = min (minimum,arr[i][j]);
        }
       
    }
 cout<<minimum<<" ";
}