// Day(7) ------ Last occurence of string
#include <iostream>
#include<string>
using namespace std;
void solve(string& s,char& p,int i,int& ans){
if(i>=s.size()){
  return ;
}
if(s[i]==p){
//store the value ---- // we can iterate by right to left(easy way because we compare the element only one time)
  ans=i;
}
solve(s,p,i+1,ans);

}
int main() {
  string s;
  cin>>s;
  char p;
  cin>>p;
  int i=0;
  int ans=0;
  solve(s,p,i,ans);
  cout<<ans;

  return 0;
}
