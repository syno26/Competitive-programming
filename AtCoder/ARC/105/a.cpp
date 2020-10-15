#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll a[4];
    bool c=false;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    ll sum=a[0]+a[1]+a[2]+a[3];
    for(int i=0;i<4;i++)
    {
        if(a[i]==sum-a[i])
        {
            c=true;
            break;
        }
    }
    if(a[0]+a[1]==sum-a[0]-a[1] || a[2]+a[1]==sum-a[2]-a[1] || a[2]+a[3]==sum-a[2]-a[3] || a[2]+a[0]==sum-a[2]-a[0] || a[3]+a[0]==sum-a[3]-a[0])
    {
        c=true;
    }
    if(a[0]+a[1]+a[2]==sum-a[0]-a[1]-a[2] || a[0]+a[1]+a[3]==sum-a[0]-a[1]-a[3] || a[0]+a[3]+a[2]==sum-a[0]-a[3]-a[2] || a[3]+a[1]+a[2]==sum-a[3]-a[1]-a[2])
    {
        c=true;
    }
    if(c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" <<endl;
    }
    
    return 0;
}
