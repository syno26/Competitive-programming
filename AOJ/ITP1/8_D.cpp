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
    int num;
    string s,p,scopy;
    bool check=false;

    cin >> s;
    cin >> p;
    scopy=s;

    int l=0;
    for(int k=0;k<s.size();++k)
    {
        if(s[k]==p[l])
        {
            for(int i=k;i<k+s.size();++i)
            {
                if(scopy[i]!=p[l])
                {
                    break;
                }
                ++l;
                if(l==p.size())
                {
                    check=true;
                }
            }
            l=0;
        }
        scopy.push_back(s[k]);
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
