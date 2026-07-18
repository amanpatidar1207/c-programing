#include<iostream>
using namespace std;
int main(){

    cout<<"inter the number which do you store in box x    :";

    int arr[] = {1,2,3,4,5,20,20,10};
    int n = sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
     sum += arr[i];       // aga hamko bar bar yr karna hai sum to fir ek dikkat to hogi hi to hame sizi bar bar mantion karni padegi to fir ham
                            // ek sort me ek kam karte hai ham isko sizeof se shuru kar sakte hai
     }
     cout<<sum;
}