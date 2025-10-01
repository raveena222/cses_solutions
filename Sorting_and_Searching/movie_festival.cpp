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
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b){
        if(a.first!= b.first) return a.second< b.second;
        return a.first<b.first; 
    });

    ll cnt=0, prev=-1, ans=0;
    for(ll i=0;i<n;i++){
        if(v[i].first>= prev){
            cnt++;
            ans= max(ans, cnt);
            prev= v[i].second;
        }
        else{
            if(v[i].second< prev){
                cnt=1;
                prev= v[i].second;
            }
        }
    }

    cout<<ans;
    return 0;
}