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
        string x;
        cin >> x;

        const int limit = x[0] - '0' - 1;
        cout << (10 * limit) + ((x.length()) * (x.length() + 1) / 2) << '\n';
    }

    return 0;
}