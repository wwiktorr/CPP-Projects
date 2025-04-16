#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n;
    int x, y;
    int minX = INT32_MAX, maxX = INT32_MIN, minY = INT32_MAX, maxY = INT32_MIN;
    int a, b, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > maxX)
            maxX = x;
        if (y > maxY)
            maxY = y;
        if (x < minX)
            minX = x;
        if (y < minY)
            minY = y;
    }
    a = maxY - minY;
    b = maxX - minX;
    cout << a * 2 + b * 2;

    return 0;
}