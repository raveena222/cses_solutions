#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

ll possible(ll mid, vector<ll>& v){
    ll cost=0;
    for(ll i=0;i<v.size();i++){
        cost+= abs(v[i]- mid);
    }
    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());

    ll maxi= LLONG_MAX;
    if (n % 2 == 1)
    {
        maxi = possible(v[n / 2], v);
    }
    else
    {
        maxi = max(possible(v[(n - 1) / 2], v), possible(v[n / 2], v));
    }
    cout<<maxi;
    return 0;
}