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
    int n, score1 = 0, score2 = 0;
    string s1, s2;

    cin >> n;
    for (int j = 0; j < n; ++j)
    {
        cin >> s1 >> s2;
        for (int i = 0; i < min(s1.size(), s2.size()); ++i)
        {
            if (s1[i] == s2[i])
            {
                if (i + 1 == min(s1.size(), s2.size()))
                {
                    if (s1.size() == s2.size())
                    {
                        score1++;
                        score2++;
                    }
                    else if (s1.size() < s2.size())
                    {
                        score2 += 3;
                    }
                    else
                    {
                        score1 += 3;
                    }
                }
                continue;
            }
            else if (s1[i] > s2[i])
            {
                score1 += 3;
                break;
            }
            else
            {
                score2 += 3;
                break;
            }
        }
    }

    cout << score1 << " " << score2 << endl;

    return 0;
}
