#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll r, c;
    cin >> r >> c;

    vector<vector<char>> v(r, vector<char>(c));

    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<char> valid = {'A', 'B', 'C', 'D'};

    vector<pair<ll, ll>> moves = {{-1, 0}, {0, -1}};
    
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            bool assigned = false;
            for (char& it : valid)
            {
                bool flag = true;
                if(v[i][j]== it){
                    flag = false;
                }
                for (int k = 0; k < 2; k++)
                {
                    if(flag == false) continue;
                    
                    ll newr = i + moves[k].first;
                    ll newc = j + moves[k].second;

                    if (newr >= 0 && newr < r && newc >= 0 && newc < c)
                    {
                        if (v[newr][newc] == it)
                        {
                            flag = false;
                            break;
                        }
                        
                    }
                }

                if (flag)
                {
                    v[i][j] = it;
                    assigned= true;
                    break;
                }
                    
            }
            if(!assigned){
                cout<<"IMPOSSIBLE\n";
                return 0;
            }
        }
    
    }

    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cout << v[i][j];
        }
        cout << '\n';
    }

    return 0;
}