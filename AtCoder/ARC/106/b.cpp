#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<ll>>;

int main(void)
{
    ll n, m;
    vector<ll> a, b;
    Graph ga,gb,gc;

    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }

    ga.resize(n,vector<ll>(n));
    gb.resize(n,vector<ll>(n));
    gc.resize(n,vector<ll>(n+1,0));

    for (int j = 0; j < m; ++j)
    {
        ll c,d;
        cin >> c >> d;
        --c;
        --d;

        gc[c][d]=1;
        gc[d][c]=1;
        ga[c][d]=a[d];
        ga[d][c]=a[c];
        gb[c][d]=b[d];
        gb[d][c]=b[c];
    }

    // find hasi
    int youso;
    for(int i=0;i<n;++i)
    {
        if(gc[i][n]==1)
        {
            continue;
        }
        youso=0;
        for(int j=0;j<n;++j)
        {
            if(gc[i][j]==1)
            {
                ++youso;
            }
        }
        if(youso==1)
        {
            ll counta=0,countb=0;
            ll x=i,y=0;
            // hasi
            while(1)
            {
                while(gc[x][y]!=1 && y<n)
                {
                    ++y;
                }
                gc[x][n]=1;
                if(y==n)
                {
                    break;
                }
                counta+=ga[x][y];
                countb+=gb[x][y];
                swap(x,y);
                ++y;
            }
            if(counta!=countb)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
