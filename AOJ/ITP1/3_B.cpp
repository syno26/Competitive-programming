#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int x,count=0;
    vector<int> data;

    do
    {
        cin >> x;
        data.push_back(x);
        count++;
    }while(x!=0);
    
    for(int i=0;i<data.size()-1;i++)
    {
        cout << "Case " << i+1 << ": " << data[i] << endl;
    }

    return 0;
}
