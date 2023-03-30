// Day(1)----- Fibonacci number
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        
        int ans = fibonacci(n - 1) + fibonacci(n - 2);
        return ans;
    }
}
int main()
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
}
