#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    string s;
    bool f=false;
    cin >> s;
    if(s=="RRS" || s=="SRR")
    {
        cout << 2 << endl;
    }
    else if(s=="RRR")
    {
        cout << 3 << endl;
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            if(s[i]=='R')
            {
                f=true;
            }
        }
        if(f)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        
    }

    return 0;
}
