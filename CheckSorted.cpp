//// Day(3) ---- Checksorted ,,i/p-array,,o/p--true/false
#include <iostream>
#include<vector>
using namespace std;
bool checksort(vector<int> arr,int n,int i){
 if(i == n-1){
    return true;
 }
 if(arr[i+1]<arr[i]){
    return false;
 }
  return checksort(arr,n,i+1);
}


int main() {
    vector<int> arr={2,6,7,9,12,11};
    int n=arr.size();
    int i=0;
    bool ans=checksort(arr,n,i);
    if(ans==true){
        cout<<"  array is sorted";
    }
    else{
        cout<<" not sorted";
    }
}
