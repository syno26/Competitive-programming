#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>
#include <stack>

using namespace std;

int main(void)
{
    int n,m,l;
    vector<vector<long> > a,b,c;

    cin >> n >> m >> l;
    a.resize(n,vector<long>(m));
    b.resize(m,vector<long>(l));
    c.resize(n,vector<long>(l));

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<l;++j)
        {
            cin >> b[i][j];
        }
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<l;++j)
        {
            for(int k=0;k<m;++k)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
            cout << c[i][j];
            if(j!=l-1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
