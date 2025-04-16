#include <iostream>
#include <cmath>

using namespace std;
const int plotM = 7;
int main()
{
    float n, p, r, plot;
    cin >> n;
    p = n * plotM;
    r = sqrt(p / M_PI);
    plot = floor(2 * r * M_PI);

    printf("%.0f", plot);

    return 0;
}