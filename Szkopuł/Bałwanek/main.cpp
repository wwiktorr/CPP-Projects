#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float r, k, d1, d2, d3;
    cin >> r >> k;
    d1 = k + k * 2 + k * 4;
    d2 = k * 2 + k + k / 2;
    d3 = k + k / 2 + k / 4;
    if (k + k * 2 + k * 4 <= r)
    {
        printf("%.0f\n", d1 * 1000);
    }
    else if (k * 2 + k + k / 2 <= r)
    {
        printf("%.0f\n", d2 * 1000);
    }
    else if (k + k / 2 + k / 4 <= r)
    {
        printf("%.0f\n", d3 * 1000);
    }
    else
    {
        puts("0");
    }

    return 0;
}