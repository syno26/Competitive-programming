#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n;
    ll d1,d2;
    bool check=false;
    ll count=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> d1 >> d2;
        if(d1==d2)
        {
            count+=1;
            if(count>=3)
            {
                check=true;
            }
        }
        else
        {
            count=0;
        }
    }
    if(check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
