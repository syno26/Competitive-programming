#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main(void)
{
    int x;
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    ll b[k];
    for(int i=0;i<n-k;i++)
    {
        if(a[i]<a[i+k])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
