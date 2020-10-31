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
    int count = 0;
    string w, t;

    cin >> w;

    while (1)
    {
        cin >> t;
        if (t == "END_OF_TEXT")
        {
            break;
        }
        for (int i = 0; i < t.size(); ++i)
        {
            if (isupper(t[i]))
            {
                t[i] = tolower(t[i]);
            }
        }
        if (t == w)
        {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
