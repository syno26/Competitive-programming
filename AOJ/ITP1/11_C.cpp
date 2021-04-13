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

int main(void)
{
    Dice dice1, dice2;

    for (int i = 0; i < 6; i++)
    {
        cin >> dice1.label[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> dice2.label[i];
    }

    int top, front;
    top = dice1.label[1];
    front = dice1.label[2];
    int count = 0;
    while (dice2.label[0] != top && count < 7)
    {
        if (count < 4)
        {
            dice2.roll('E');
        }
        else if (count < 7)
        {
            dice2.roll('N');
        }
        ++count;
    }

    if (dice2.label[0] == top)
    {
        dice2.roll('S');
    }

    count = 0;
    while (dice2.label[2] != front && count < 4)
    {
        dice2.roll('W');
        ++count;
    }


    if (dice1.label[0] == dice2.label[0] && dice1.label[1] == dice2.label[1] && dice1.label[2] == dice2.label[2] && dice1.label[3] == dice2.label[3] && dice1.label[4] == dice2.label[4] && dice1.label[5] == dice2.label[5])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
