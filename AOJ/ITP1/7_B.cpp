#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>
#include <climits>
#include <stack>

using namespace std;

int main(void)
{
    int n, x, count = 0;

    do
    {
        count = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }

        for (int i = 1; i <= n - 2; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    } while (true);

    return 0;
}
