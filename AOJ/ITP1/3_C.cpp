#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>

using namespace std;

int main(void)
{
    vector<pair<int,int> > p;
    int a,b;

    do
    {
        cin >> a >> b;
        if(a>b)
        {
            swap(a,b);
        }
        p.push_back(make_pair(a,b));        
    } while (!((a==0)&&(b==0)));

    for(int i=0;i<p.size()-1;i++)
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}
