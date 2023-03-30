/// Day (1) - Factorial
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        int ans=n*fact(n-1);
        return ans;
    }

}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    
    cout<<ans<<endl;
}
