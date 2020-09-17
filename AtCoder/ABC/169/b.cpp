#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    long long a,max=pow(10,18),ans=1;
    bool zerocheck=false,maxcheck=false;

    for(int i=0;i<n;i++)
    {
        cin >> a;
        if(a==0)
        {
            zerocheck=true;
        }
        else if(ans > max /a)
        {
            maxcheck=true;
        }
        else
        {
            ans*=a;
        }        
    }
    if(zerocheck)
    {
        cout << 0 << endl;
    }
    else if(maxcheck)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}
