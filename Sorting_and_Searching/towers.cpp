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
    ll cnt=0;
    multiset<ll>mt;

    for(ll i=0;i<n;i++){
        auto it= mt.upper_bound(v[i]);
        if(it== mt.end()){
            cnt++;
            mt.insert(v[i]);
        }
        else{
            mt.erase(it);
            mt.insert(v[i]);
        }
    }

    cout<<cnt;

    return 0;
}