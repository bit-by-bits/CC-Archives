#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i = 0; i < 4; i++) cin >> arr[i];

    sort(arr, arr + 4);
    for (int i = 0; i < 3; i++) cout << arr[3] - arr[i] << ' ';
    
    return 0;
}