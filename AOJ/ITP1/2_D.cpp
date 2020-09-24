#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int W,H,x,y,r;
    bool check=true;

    cin >> W >> H >> x >> y >> r;

    if((y+r > H) | (y-r < 0) | (x+r > W) | (x-r < 0)) 
    {
        check = false;
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
