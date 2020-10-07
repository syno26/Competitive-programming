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
    int m, f, r;
    vector<string> s;

    do
    {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
        {
            break;
        }
        else if (m == -1 || f == -1)
        {
            s.push_back("F");
        }
        else if (m + f >= 80)
        {
            s.push_back("A");
        }
        else if (m + f >= 65)
        {
            s.push_back("B");
        }
        else if (m + f >= 50)
        {
            s.push_back("C");
        }
        else if (m + f >= 30 && r >= 50)
        {
            s.push_back("C");
        }
        else if (m + f >= 30)
        {
            s.push_back("D");
        }
        else if (m + f < 30)
        {
            s.push_back("F");
        }
    } while (m != 0 || f != 0 || r != 0);

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}
