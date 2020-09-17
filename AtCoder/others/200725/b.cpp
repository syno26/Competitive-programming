#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

int main(void)
{
    ll a,b,c,k;
    cin >> a >> b >> c;
    cin >> k;
    while(b<=a)
    {
        b=b*2;
        k--;
    }
    while(c<=b)
    {
        c=c*2;
        k--;
    }
    if(k<0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    
    return 0;
}
