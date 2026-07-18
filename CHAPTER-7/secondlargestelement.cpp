#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {4,5,7,9,11,13};
    int n = sizeof(arr)/4;
int mx = INT_MIN;

for(int i=0;i<n;i++){
     if (arr[i]>mx) mx = arr[i]; 
}
cout<<mx<<"  ";

int smx = INT_MIN;
for(int i=0;i<n;i++){
    if (arr[i]!=mx)  smx = arr[i];

}
    cout<<smx<<" ";
}