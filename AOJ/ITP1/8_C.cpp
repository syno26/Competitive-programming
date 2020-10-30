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
    int num, i = 0;
    string s;
    vector<int> count(26);

    while (cin >> s)
    {
        for (i = 0; i < s.size(); ++i)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            num = s[i] - 'a';
            count[num]++;
        }
    }

    for (i = 0; i < 26; ++i)
    {
        s = 'a' + i;
        cout << s << " : " << count[i] << endl;
    }

    return 0;
}
