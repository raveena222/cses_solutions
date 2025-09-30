#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> desires(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> desires[i];
    }

    vector<ll> apart(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> apart[i];
    }

    sort(desires.begin(), desires.end());
    sort(apart.begin(), apart.end());

    ll i = 0, j = 0, cnt = 0;

    while (i < n && j < m)
    {
        if (apart[j] < desires[i] - k)
        {
            j++;
        }
        else if (apart[j] >= desires[i] - k && apart[j] <= desires[i] + k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (apart[j] > desires[i] + k)
        {
            i++;
        }
    }

    cout << cnt;
    return 0;
}