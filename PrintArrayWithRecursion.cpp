// Day(2) ----- printarray with recursion
#include <iostream>
using namespace std;
void printarray(int arr[],int n,int i)
{
    if(i>=n){
        return;
    }
    else{
        cout<<arr[i]<<" ";
        printarray(arr,n,i+1);
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    printarray(arr,n,i);
return 0;
}
