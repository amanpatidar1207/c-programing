#include<iostream>
using namespace std;
void change (int x[]){     // isme name change ka de to bhi isme vahi valure change hogi 
     x[0] = 9;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"enter the number in box   :";
    cout<<endl;
    
 for(int i=0;i<=4;i++){
         cout<<arr[i];
         cout<<" ";
         

        }
        cout<<endl;
        change(arr);
for(int i=0;i<=4;i++){
         cout<<arr[i];   // isko hamne function ki mada se value change ki hai ander ki to ham ese bhi kar sakte hai 
         cout<<" ";
        }
}