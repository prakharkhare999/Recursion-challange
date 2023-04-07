// Day(8)     Reverse a string using recursion
#include <iostream>
#include<string>
using namespace std;
void reverse(string &s,int st,int e){
  if(st>=e){
    return;
  }
swap(s[st],s[e]);
reverse(s,st+1,e-1);
}

int main() {
  string s;
  cin>>s;
  reverse(s,0,s.size()-1);
  cout<<s<<" ";
  return 0;
}
