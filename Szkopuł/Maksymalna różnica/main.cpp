#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, x, a;
    cin >> n;
    int max = INT32_MIN, min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < min)
            min = a;
        if (a > max)
            max = a;
    }
    x = max - min;
    printf("%d", x);

    return 0;
}