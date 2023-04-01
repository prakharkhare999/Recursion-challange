/// Day(3) ----- Find minimunm in array
#include <iostream>
#include<limits.h>
using namespace std;
void findmin(int arr[],int n,int i,int & mini)
{
   if(i>=n){
    return;
   }
   if(arr[i]<mini){
    mini=arr[i];

   }
   findmin(arr,n,i+1,mini);
}
int main(){
    int arr[10]={10,20,30,40,50,5,3,77,99,2};
  int n=10;
  int i=0;
  int mini=INT_MAX;
  findmin(arr,n,i,mini);
  cout<<mini;

}
