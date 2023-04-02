// Day(4) ------ Biarnysearch 
#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> arr, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main()
{
    vector<int> arr = {2, 6, 7, 9, 12, 11,55,44,33,34,332};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int key = 33;
    int ans = binarysearch(arr, s, e, key);
    cout << ans;
}
