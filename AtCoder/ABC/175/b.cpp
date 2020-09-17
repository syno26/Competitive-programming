#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n;
    cin >> n;
    ll l[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin >> l[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(l[i]+l[j]>l[k] && l[k]+l[j]>l[i] && l[i]+l[k]>l[j] && l[i]!=l[k] && l[k]!=l[j] && l[i]!=l[j])
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
