#include<iostream>
#include<climits>
using namespace std;
int main(){

    cout<<"inter the number which do you store in box x    :";

    int arr[] = {-12,2,3,4,5,20,205,10};
    int n = sizeof(arr)/4;
    int min = INT_MAX;

    for(int i=0;i<n;i++){
     if (arr[i]<min) min = arr[i];
     
             
     }
     cout<<min;
}