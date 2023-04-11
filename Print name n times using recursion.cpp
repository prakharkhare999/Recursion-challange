// Day(12) -------Print name n times using recursion.cpp
#include <iostream>
using namespace std;
void solve(int i,int& n){
  if(i>n){
    return;
  }
  cout<<"hacker bolte"<<endl;
  solve(i+1,n);
}
int main() {
  int n;
  cin>>n;
  solve(1,n);
  return 0;
}
