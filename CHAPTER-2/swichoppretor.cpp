#include<iostream>
using namespace std;
int main()
{ 
    cout <<"inter yhe number in calculator     :   ";
    int n1;
    cin>>n1;
    char(op);
    cin>>op;
    int n2;
    cin>>n2;

  switch (op)
  {
  case ('+'):
 cout<<n1+n2<<endl;
    break;
  
   case ('-'):
 cout<<n1-n2<<endl;
    break;                    // agar break nahi denge to hame sare sine k output dega 
    
  
     case ('*'):
 cout<<n1*n2<<endl;
    break;
  
     case ('/'):
 cout<<n1/n2<<endl;
    break;
  
    default :
    cout<<"invalide"<<endl;
  }

}