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
    if(c=='E'){
        tmp=label[2];
        label[2]=label[0];
        label[0]=label[3];
        label[3]=label[5];
        label[5]=tmp;
    }
    if(c=='W'){
        tmp=label[2];
        label[2]=label[5];
        label[5]=label[3];
        label[3]=label[0];
        label[0]=tmp;
    }
    if(c=='N'){
        tmp=label[0];
        label[0]=label[1];
        label[1]=label[5];
        label[5]=label[4];
        label[4]=tmp;
    }
    if(c=='S'){
        tmp=label[0];
        label[0]=label[4];
        label[4]=label[5];
        label[5]=label[1];
        label[1]=tmp;
    }
}

void Dice::top(){
    cout << label[0] << endl;
}

int main(void)
{
    int n;
    Dice dice;

    for(int i=0;i<6;i++){
        cin >> dice.label[i];
    }

    cin >> n;

    for(int i=0;i<n;++i){
        int top,front;
        cin >> top >> front;
        int count=0;
        while(dice.label[0]!=top){
            if(count < 4){
                dice.roll('E');
            }
            else{
                dice.roll('N');
            }
            ++count;
        }
        dice.roll('S');

        while(dice.label[2]!=front){
            dice.roll('W');
        }

        dice.top();
    }

    return 0;
}
