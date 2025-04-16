#include <iostream>

using namespace std;
int main()
{
    unsigned int k, pal = 0, n = 1, temp, i = 0;
    bool jestPal = false;
    cin >> k;
    const int k2 = k;
    while (jestPal == false)
    {
        n = 1;
        pal = 0;
        k = k2 + i;
        temp = k;
        while (temp > 0)
        {
            temp /= 10;
            n *= 10;
        }
        n /= 10;
        while (k != 0)
        {
            pal += k % 10 * n;
            k /= 10;
            n /= 10;
        }
        k = k2 + i;
        if (k == pal)
        {
            jestPal = true;
            break;
        }
        i++;
    }
    cout << i;

    return 0;
}