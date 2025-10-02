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
    vector<ll>v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll maxi=INT_MIN, sum=0;
    for(ll i=0;i<n;i++){
        sum+= v[i];
        maxi= max(maxi, sum);
        if(sum<0) sum=0;
    } 
    cout<<maxi;  
    
    return 0;
}