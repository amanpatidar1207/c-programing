#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
string s = "gangsater";
 cout<<s<<endl;
 int n = s.length();

reverse(s.begin(),s.begin()+9);   // isse  jitna change karwana hai utana hi karwa sakte hai
cout<<s<<endl;


  //  reverse(s.begin(),s.end());   // isse puri line ko reverse kar sakte hai 
  //  cout<<s<<endl;

}