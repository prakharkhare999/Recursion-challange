// Day(3) ------ Findmaximun in array
#include <iostream>
#include<limits.h>
using namespace std;
void findmax(int arr[],int n,int i,int & maxi)
{
   if(i>=n){
    return;
   }
   if(arr[i]>maxi){
    maxi=arr[i];

   }
   findmax(arr,n,i+1,maxi);
}
int main(){
    int arr[10]={10,20,30,40,50,5,3,77,99,2};
  int n=10;
  int i=0;
  int maxi=INT_MIN;
  findmax(arr,n,i,maxi);
  cout<<maxi;

}
