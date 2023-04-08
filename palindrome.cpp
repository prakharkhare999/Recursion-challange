// Day(9) ---- palindrome   
#include <iostream>
#include<string>
using namespace std;
bool palindrome(string &s,int start,int end){
  if(start>=end){
    return true;
  }
  if(s[start]!=s[end]){
    return false;
  }
  palindrome(s,start+1,end-1);


}
int main() {
  
string s;
cin>>s;
bool p=palindrome(s,0,s.size()-1);
cout<<p;
return 0;
}
