// Day(2) ----Count stairs 
#include <iostream>
using namespace std;
int countstair(int n)
{
if(n==0 || n==1){
    return 1;
}
    else
    {
        
        int ans = countstair(n - 1) + countstair(n - 2);
        return ans;
    }
}
int main()
{
    int n;
    cin >> n;
    int ans = countstair(n);
    cout << ans;
}
