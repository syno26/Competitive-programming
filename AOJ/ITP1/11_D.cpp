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

#define MPI 3.14159265358979323846

using namespace std;

class Dice
{
public:
    int label[6];
    void roll(char c);
    void top();
};

void Dice::roll(char c)
{
    int tmp;
    if (c == 'E')
    {
        tmp = label[2];
        label[2] = label[0];
        label[0] = label[3];
        label[3] = label[5];
        label[5] = tmp;
    }
    if (c == 'W')
    {
        tmp = label[2];
        label[2] = label[5];
        label[5] = label[3];
        label[3] = label[0];
        label[0] = tmp;
    }
    if (c == 'N')
    {
        tmp = label[0];
        label[0] = label[1];
        label[1] = label[5];
        label[5] = label[4];
        label[4] = tmp;
    }
    if (c == 'S')
    {
        tmp = label[0];
        label[0] = label[4];
        label[4] = label[5];
        label[5] = label[1];
        label[1] = tmp;
    }
}

void Dice::top()
{
    cout << label[0] << endl;
}

bool same(Dice a, Dice b)
{
    for (int i = 0; i < 6; ++i)
    {
        if (a.label[i] != b.label[i])
        {
            return false;
        }
    }
    return true;
}

bool check(Dice dice1, Dice dice2, int top, int front)
{
    dice2.roll('S');

    int count = 0;

    while (count < 4)
    {
        if (same(dice1, dice2))
        {
            return true;
        }
        dice2.roll('W');
        ++count;
    }

    return false;
}

int main(void)
{
    int n;

    cin >> n;

    Dice dice[n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cin >> dice[i].label[j];
        }
    }

    bool flag = false;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int top, front;
            top = dice[i].label[1];
            front = dice[i].label[2];
            int count = 0;
            while (count < 7)
            {
                if (dice[j].label[0] == top && check(dice[i], dice[j], top, front))
                {
                    flag = true;
                }
                if (count < 4)
                {
                    dice[j].roll('E');
                }
                else if (count < 7)
                {
                    dice[j].roll('N');
                }
                ++count;
            }
        }
    }

    if (flag)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
