#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod= 1e9+7;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll, ll>> moves= {{2,-1}, {2, 1}, {-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {-1, -2}, {1, -2}};
    queue<pair<ll, ll>>q;
    vector<vector<ll>> v(n, vector<ll>(n, -1));
    v[0][0]=0;
    q.push({0, 0});

    while(!q.empty()){
        auto it= q.front();
        q.pop();
        
        for(int i=0;i<8;i++){
            ll newr= it.first + moves[i].first;
            ll newc= it.second + moves[i].second;

            if(newr>=0 && newr<n && newc>=0 && newc<n && v[newr][newc]==-1){
                v[newr][newc]= v[it.first][it.second] +1;
                q.push({newr, newc});
            }
        }
    }
    
    for(ll i=0;i< n;i++){
        for(ll j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}