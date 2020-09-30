#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>

using namespace std;

int main(void)
{
    int h, w, count = 0;
    vector<int> H, W;

    while (1)
    {
        cin >> h >> w;
        if (h == 0 && w == 0)
        {
            break;
        }
        count++;
        H.push_back(h);
        W.push_back(w);
    }

    for (int k = 0; k < count; k++)
    {
        for (int i = 0; i < H[k]; i++)
        {
            for (int j = 0; j < W[k]; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
