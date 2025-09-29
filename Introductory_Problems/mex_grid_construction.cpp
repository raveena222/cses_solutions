#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

typedef long long ll;
const int mod = 1e9 + 7;

vector<ll> pow1 = {0, 1, 2, 4, 8, 16, 32, 64, 128};

void build(ll r, ll c, vector<vector<ll>> &a)
{
    ll i = 0, j = 0;
    while (pow1[i] <= r)
        i++;
    while (pow1[j] <= c)
        j++;

    i--, j--;
    if (pow1[i] < pow1[j])
    {
        a[r][c] = pow1[j] + a[r][c - pow1[j]];
    }
    else if (pow1[i] > pow1[j])
    {
        a[r][c] = pow1[i] + a[r - pow1[i]][c];
    }
    else
    {
        a[r][c] = a[r - pow1[i]][c - pow1[j]];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            build(i, j, a);
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}