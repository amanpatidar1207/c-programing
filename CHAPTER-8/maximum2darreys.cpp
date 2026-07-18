#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[3][2] = {{1,74},{2,78},{3,86}};
    int mx = INT_MIN;
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){
            mx = max(mx,arr[i][j]);
        }
       
    }
 cout<<mx<<" ";
}