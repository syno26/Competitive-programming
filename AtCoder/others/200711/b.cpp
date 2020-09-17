#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n,count=0;
    vector<int> a;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        if(i%2 == 1 && x%2 == 1)
        {
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}
