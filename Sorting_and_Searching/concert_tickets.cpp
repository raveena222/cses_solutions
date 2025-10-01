#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin>>n>>m;
    vector<ll>price(n);
    for(ll i=0;i<n;i++){
        cin>>price[i];
    }

    vector<ll>customer(m);
    for(ll i=0;i<m;i++){
        cin>>customer[i];
    }

    map<ll, ll>mp;
    for(ll i=0;i<n;i++){
        mp[price[i]]++;
    }

    ll j=0;
    while(m--){
        ll last= -1;
        auto it= mp.upper_bound(customer[j]);
        if(it!= mp.begin()){
            it--;
            last= it->first;
            mp[last]--;
            if (mp[last] == 0)
                mp.erase(last);
        }
        
        
        cout<<last<<"\n";
        j++;
    }

    return 0;
}