#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a;
    a.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        a.push_back(n);
    }
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}