#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector<pair<ll, ll>>sorted;
    for(ll i=0;i<n;i++){
        sorted.push_back({v[i], i+1});
    }

    sort(sorted.begin(), sorted.end());

    ll i=0, j=n-1;
    while(i<j){
        ll tmp= sorted[i].first+ sorted[j].first;
        if(tmp== x){
            cout<<sorted[i].second<<" "<<sorted[j].second;
            return 0;
        }
        else if(tmp<x){
            i++;
        }
        else j--;
    }
    cout<<"IMPOSSIBLE";
    return 0;
}