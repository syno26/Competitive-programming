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
    int n, x;
    stack<int> a;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push(x);
    }

    while (!a.empty())
    {
        cout << a.top();
        a.pop();
        if (a.empty())
        {
            break;
        }
        cout << " ";
    }
    cout << endl;

    return 0;
}
