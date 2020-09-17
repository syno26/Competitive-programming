#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,n;
    int p[101],sa_pl[101]={},sa_mi[101]={};
    cin >> x >> n;
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
        if(x>=p[i])
        {
            sa_pl[x-p[i]]=1;
        }
        else
        {
            sa_mi[p[i]-x]=1;
        }        
    }
    for(int i=0;i<101;i++)
    {
        if(sa_pl[i]==0)
        {
            cout << x-i << endl;
            return 0;
        }
        else if(i!=0 && sa_mi[i]==0)
        {
            cout << x+i << endl;
            return 0;
        }
    }

    return 0;
}
