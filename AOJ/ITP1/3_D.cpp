#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>

using namespace std;

int main(void)
{
    int a,b,c,count=0;

    cin >> a >> b >> c;

    for(;a<=b;a++)
    {
        if(c%a==0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
