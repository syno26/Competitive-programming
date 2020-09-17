#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long n,x;
    long f[100000];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        f[i]=0;
    }
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            for(int k=1;x<=n;k++)
            {
                x = i*i + j*j + k*k + i*j + j*k + k*i;
                //if(i==k && i==j && k==j)
                f[x]++;
//                else
//                {
//                    f[x]++,f[x]++,f[x]++;
//                }
                //cout << x << endl;
            }
            x=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout << f[i] << endl;
    }
}