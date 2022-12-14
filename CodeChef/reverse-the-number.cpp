#include <iostream>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        bool flag = false;

        while (!flag)
        {
            if (n % 10 == 0) n /= 10;
            else flag = true;
        }

        while (n)
        {
            int ans = n % 10;
            cout << ans;
            n /= 10;
        } cout << '\n';
    }

    return 0;
}