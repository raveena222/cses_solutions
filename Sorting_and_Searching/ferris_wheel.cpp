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
    sort(v.begin(), v.end());
    ll cnt=0;
    ll i=0, j= n-1;

    while(i<=j){
        if(i==j){
            cnt++;
            j--;
        }
        else if(v[i]+ v[j]> x){
            j--;
            cnt++;
        }
        else if(v[i]+ v[j]<= x){
            cnt++;
            j--;
            i++;
        }

    }
    cout<<cnt;
    return 0;
}