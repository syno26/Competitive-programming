#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    int q,a,b;
    string str,inst,p;

    cin >> str;
    cin >> q;

    for(int i=0;i<q;++i)
    {
        cin >> inst;
        if(inst=="print")
        {
            cin >> a >> b;
            for(;a<=b;++a)
            {
                cout << str[a];
            }
            cout << endl;
        }
        else if(inst=="reverse")
        {
            cin >> a >> b;
            string t;
            for(int x=0;x<ceil(b-a)/2;++x)
            {
                t[0]=str[a+x];
                str[a+x]=str[b-x];
                str[b-x]=t[0];
            }
        }
        else if(inst=="replace")
        {
            cin >> a >> b >> p;
            str.replace(a,b-a+1,p);
        }
    }

    return 0;
}
