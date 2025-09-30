#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

char possible(vector<ll>& v, int last, ll sz){
    bool one= false;
    ll freq= (sz+1)/2;
    ll check= sz/2;
    char mode='!';
    for(int i=0;i<26;i++){
        if(v[i]>0 && !one && i!= last){
            mode= i+'A';
            one = true;
        }
        if(v[i]== freq && v[i]> check ){
            mode= i+ 'A';
            break;
        }
    }
    v[mode-'A']--;
    return mode;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();

    vector<ll>v(26, 0);
    for(char& ch:s){
        v[ch-'A']++;
        if(v[ch-'A']> (n+1)/2){
            cout<<-1;
            return 0;
        }
    }
    string res="";
    int last= -1;
    while(n--){
        char ch= possible(v, last, n+1);
        res+= ch;
        last= ch-'A';
    }
    cout<<res;
    return 0;
}
