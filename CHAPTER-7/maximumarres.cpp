#include<iostream>
#include<climits>
using namespace std;
int main(){

    cout<<"inter the number which do you store in box x    :";

    int arr[] = {-2,-20,-79,-28};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;

    for(int i=0;i<n;i++){
     if (arr[i]>mx) mx = arr[i];
           
     }
     cout<<mx;
}