#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

ll gcd(ll a, ll b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main(void)
{
    ll n,x;
    vector<ll> a;
    
    cin >> n;
    if(n==1)
    {
        cin >> n;
        cout << n << endl;
        return 0;
    }
    a.resize(n);
    ll min=LONG_MAX,max=LONG_MIN;

    for(ll i=0;i<n;i++)
    {
        cin >> x;
        a[i]=x;
        if(x<min)
        {
            min=x;
        }
        if(x>max)
        {
            max=x;
        }
    }
    ll value,z=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        if(min==a[i])
        {
            continue;
        }
        value=gcd(min,a[i]);
        if(value<z)
        {
            z=value;
        }
    }
    cout << z << endl;
    return 0;
}
