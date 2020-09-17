#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    a=a%1000;
    if(a==0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << 1000 - a%1000 << endl;
    }

    return 0;
}
