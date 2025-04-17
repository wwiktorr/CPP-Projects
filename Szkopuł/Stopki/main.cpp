#include <iostream>

using namespace std;
int main()
{
    unsigned int r, k, a;
    int s = 0;
    bool i = false;
    cin >> r >> k >> a;
    while (r >= s)
    {

        i = !i;
        if (i)
            s += k;
        if (!i)
            s += a;
    }
    cout << i;

    return 0;
}