#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if ((double)(n / 2) < x)
            cout << n - x << '\n';
        else
            cout << x << '\n';
    }

    return 0;
}