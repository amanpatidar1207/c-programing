#include<iostream>
using namespace std;
void aman (int n ){ 
    if (n==0)return;
    cout<<n<<endl;
    aman(n-1);
}
int main(){

    aman(70);   // ye loop jesa kamka raha hai jese for loop or while loop karte the 

}