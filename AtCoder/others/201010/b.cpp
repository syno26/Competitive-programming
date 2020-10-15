#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    int h, w;
    cin >> h >> w;
    string masu[h];

    for (int i = 0; i < h; i++)
    {
        cin >> masu[i];
    }

    int count = 0;
    for (int i = 0; i < h ; i++)
    {
        for (int j = 0; j < w ; j++)
        {
            if(j<w-1)
            {
                if (masu[i][j] == '.' && masu[i][j + 1] == '.')
                {
                    count++;
                }
            }
            if(i<h-1)
            {
                if (masu[i][j] == '.' && masu[i + 1][j] == '.')
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
