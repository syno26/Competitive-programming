#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,d;
    cin >> n >> d;
    ll x,y,count=0;
    ld value=0.0;
    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        value=(ld)(sqrt(pow(x,2)+pow(y,2)));
        if(value<=d)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
