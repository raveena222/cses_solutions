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
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ll prev= v[0];
    ll cnt=1;

    for(ll i=0;i<n;i++){
        if(v[i]!= prev){
            cnt++;
            prev= v[i];
        }
    }

    cout<<cnt;
    
    return 0;
}