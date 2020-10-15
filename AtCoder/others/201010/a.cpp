#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    char s,t;
    cin >> s >>t;
    if(s=='Y')
    {
        if(t=='a')
        {
            cout << "A" << endl;
        }
        if(t=='b')
        {
            cout << "B" << endl;
        }
        if(t=='c')
        {
            cout << "C" << endl;
        }
    }
    else
    {
        cout << t << endl;
    }
    
    return 0;
}
