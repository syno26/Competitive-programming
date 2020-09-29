#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    int a, b;
    vector<int> ans;
    char op;

    while (1)
    {
        cin >> a >> op >> b;
        if (op == '?')
        {
            break;
        }
        else if (op == '+')
        {
            ans.push_back(a + b);
        }
        else if (op == '-')
        {
            ans.push_back(a - b);
        }
        else if (op == '*')
        {
            ans.push_back(a * b);
        }
        else if (op == '/')
        {
            ans.push_back(a / b);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}
