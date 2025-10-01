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
    cin>>n;
    vector<pair<ll, ll>>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    map<ll, ll>mp;
    for(auto& it: v){
        mp[it.first]++;
        mp[it.second]--;   
    }

    ll cnt=0, ans=0;
    for(auto& it: mp){
        cnt+= it.second;
        ans= max(ans, cnt);
    }
    cout<<ans;
    return 0;
}