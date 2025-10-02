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
    
    sort(v.begin(), v.end());

    ll cnt=0;
    
    for(ll i=0;i<n;i++){
        if(cnt+1<v[i]){
            break;
        } 
        else cnt+= v[i];   
    }
    cout<<cnt+1;
    
    return 0;
}