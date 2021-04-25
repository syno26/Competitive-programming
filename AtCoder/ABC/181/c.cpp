#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll saidai=10001;
    ll n,x,y;
    cin >> n;
    vector<ll> wa(saidai),sal(saidai),sar(saidai),retu(saidai),gyou(saidai);
    vector<vector<ll>> xy(saidai,vector<ll>(saidai,0));

    for(ll i=0;i<n;++i)
    {
        cin >> x >> y;
        xy[x][y]=1;
    }

    for(ll i=0;i<saidai;++i)
    {
        for(ll j=0;j<saidai;++j)
        {
            if(xy[i][j]==1)
            {
                ++gyou[i];
                ++retu[j];
                if(i+j<saidai)
                {
                    ++wa[i+j];
                }
                if(i<=j)
                {
                    ++sal[j-i];
                }
                else
                {
                    ++sar[i-j];
                }
            }
        }
    }

    bool check=false;
    
    for(ll i=0;i<saidai;++i)
    {
        for(ll j=0;j<saidai;++j)
        {
            if(gyou[i]>=3 || retu[j]>=3)
            {
                check=true;
            }
            if(i+j<saidai)
            {
                if(wa[i+j]>=3)
                {
                    check=true;
                }
            }
            if(i<=j)
            {
                if(sal[j-i]>=3)
                {
                    check=true;
                }
            }
            else if(i>j)
            {
                if(sar[i-j]>=3)
                {
                    check=true;
                }
            }
        }
    }
    if(check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
