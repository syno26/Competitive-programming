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
    string s, sb;
    int m, h;

    while (1)
    {
        cin >> s;
        if (s == "-")
        {
            break;
        }
        cin >> m;
        for (int i = 0; i < m; ++i)
        {
            cin >> h;
            sb = s.substr(0, h);
            s.erase(0, h);
            s = s + sb;
        }
        cout << s << endl;
    }

    return 0;
}
