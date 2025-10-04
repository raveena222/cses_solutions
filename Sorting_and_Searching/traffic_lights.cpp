#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, n;
    cin >> x>>n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<ll>st;
    st.insert(0);
    st.insert(x);
    set<pair<ll,pair<ll,ll>>>dist;
    dist.insert({x,{0, x}});

    vector<ll>res;
    for(ll i=0;i<n;i++){
        auto it= st.upper_bound(v[i]);
        ll upp= *it;
        it--;
        ll down= *it;

        ll diff= upp- down;
        dist.erase({diff,{down, upp}});
        dist.insert({v[i]- down, {down, v[i]}});
        dist.insert({upp-v[i], {v[i], upp}});

        st.insert(v[i]);

        auto ans= dist.end();
        ans--;
        res.push_back(ans->first);
    }
    
    for(auto it: res){
        cout<<it<<" ";
    }
    return 0;
}
