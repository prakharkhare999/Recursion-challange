Day(1) ------- Counting
#include<iostream>
using namespace std;
void reversecount(int n){
    if(n==0){
        return;
    }


    reversecount(n-1);
        cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    reversecount(n);
}
