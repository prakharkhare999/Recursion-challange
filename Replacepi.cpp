//  Day(14)  Replace pi ;
#include <iostream>
#include<string>
using namespace std;
void solve(string s){
  if(s.length()==0){
    return;
  }
  if(s[0]=='p' && s[1]=='i'){
    cout<<"3.14"<<" ";
    solve(s.substr(2));

  }
  else{
    cout<<s[0];
    solve(s.substr(1));
  }

}
int main() {
  
  
  solve("pipipi");
  return 0;
}
