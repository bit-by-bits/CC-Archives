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
        int x, y, n;
        cin >> x >> y >> n;

        const int limit = n % x;
        cout << ((limit >= y) ? (n - limit + y) : (n - limit - x + y)) << '\n';
    }

    return 0;
}