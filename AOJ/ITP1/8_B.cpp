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
    int sum;
    string s;
    while (1)
    {
        sum = 0;
        cin >> s;
        if (s[0] == '0')
        {
            break;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            sum += s[i] - '0';
        }
        cout << sum << endl;
    }

    return 0;
}
