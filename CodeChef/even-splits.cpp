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
        int n;
        cin >> n;

        string s;
        cin >> s;

        // string temp = s;
        // sort(temp.begin(), temp.end(), greater<int>());

        if (s != "10")
            sort(s.begin(), s.end());
        cout << s << '\n';
    }

    return 0;
}