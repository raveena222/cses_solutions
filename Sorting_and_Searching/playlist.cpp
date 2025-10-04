#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<ll> st;

    ll ans = 0, i = 0, j = 0;

    while (i < n && j < n)
    {
        if (st.find(v[j]) == st.end())
        {
            st.insert(v[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        else
        {
            st.erase(v[i]);
            i++;
        }
    }
    cout << ans;

    return 0;
}
