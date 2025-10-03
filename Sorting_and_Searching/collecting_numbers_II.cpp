#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

void update(ll i, ll j, vector<ll>& pos, ll val, ll& cnt){
    ll n= pos.size();
    if(i>0 && pos[i-1]> pos[i]){
        cnt+= val;
    }
    if(j<n-1 && pos[j]> pos[j+1]){
        cnt+= val;
    }

    if(i+1== j){
        if(pos[i]>pos[j]){
            cnt+= val;
        }
    }
    else{
        if(pos[i]>pos[i+1]){
            cnt+= val;
        }
        if(pos[j-1]> pos[j]){
            cnt+= val;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pos(n,0);

    for(ll i=0;i<n;i++){
        pos[v[i]-1]= i;
    }

    ll curr=n-2, cnt=1;

    while(curr>=0){
        if(pos[curr]> pos[curr+1]){
            cnt++;
        }
        curr--;
    }

    while(m--){
        ll a, b;
        cin>>a>>b;

        a--; 
        b--;

        ll i= v[a];
        ll j= v[b];
        i--;
        j--;

        if(i>j){
            swap(i, j);
        }

        update(i, j, pos, -1, cnt);

        swap(v[a], v[b]);
        swap(pos[i], pos[j]);

        update(i, j, pos, 1, cnt);

        cout<<cnt<<"\n";

    }
    return 0;
}