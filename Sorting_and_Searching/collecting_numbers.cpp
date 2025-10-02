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
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll cnt=1, curr=n-1;

    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[v[i]]=i;
    }

    while(curr>0){
        if(mp[curr]> mp[curr+1]){
            cnt++;
        }
        curr--;
    }
    cout<<cnt;
    return 0;
}