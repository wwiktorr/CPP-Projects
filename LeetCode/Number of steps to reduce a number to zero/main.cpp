#include <iostream>

using namespace std;

int numberOfSteps(int num)
{
    int steps = 0;
    while (num > 0)
    {
        ((num & 1) == 0) ? num >>= 1 : num--;
        steps += 1;
    }
    return steps;
}