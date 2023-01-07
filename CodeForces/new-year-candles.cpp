#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define rep(start, end, x) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int unused = a, burnt = 0, used = 0;
    while (unused)
    {
        burnt += unused;
        used += unused;

        unused = burnt / b;
        burnt = burnt % b;
    }

    cout << used << '\n';
    return 0;
}