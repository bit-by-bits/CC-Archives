#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int l, k;
        cin >> l >> k;

        if (k == 2 || !(l % k))
            cout << l % k << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}