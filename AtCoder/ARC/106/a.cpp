#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,a=3,b=5;
    cin >> n;

    for(int i=1;a+b<=n;++i,a*=3)
    {
        for(int j=1;a+b<=n;++j,b*=5)
        {
            if(a+b==n)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
        b=5;
    }

    cout << "-1" << endl;

    return 0;
}
