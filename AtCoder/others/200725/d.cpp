#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main(void)
{
    ll money=1000,kabu=0;
    int n;
    cin >> n;
    ll a[n+1]={};
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        //cout << money << endl;
        //cout << kabu << endl;
        if(kabu!=0)
        {
            money += kabu*a[i];
            kabu=0;
        }
        if(a[i]<a[i+1])
        {
            kabu += money/a[i];
            money -= kabu*a[i];
        }
    }
    cout << money << endl;
    return 0;
}
