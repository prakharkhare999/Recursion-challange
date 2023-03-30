day(1)----  reversecounting

#include<iostream>
using namespace std;
void reversecount(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";

    reversecount(n-1);
}
int main(){
    int n;
    cin>>n;
    reversecount(n);
}
