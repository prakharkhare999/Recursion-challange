// Day(3)  ----   print all digits of numbers 




/// we want to print the digits reverse ,swap recursive function ,processing statement ,,,(head,tail recursion)
#include <iostream>
using namespace std;
void printdigits(int n){
  if(n==0){
    return;
  }
  printdigits(n/10);
  int ans=n%10;
cout<<ans<<" ";

}
int main() {
  int n=647;
  printdigits(n);
 
}
