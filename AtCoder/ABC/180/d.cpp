#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll x,y,a,b;
    ll exp=0;

    cin >> x >> y >> a >> b;
    while(x<y)
    {
        if(x*a<b+x)
        {
            x*=a;
            ++exp;
        }
        else
        {
            x+=b;
            ++exp;
        }
    }
    --exp;
    cout << exp << endl;

    return 0;
}
