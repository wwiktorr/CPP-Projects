#include <iostream>

using namespace std;
int main()
{
    int r, s, i = 0, m;
    cin >> r >> s;
    while (r > 0)
    {
        r -= s;
        if (s / 2 == 0)
            break;
        s /= 2;
        i++;
        if (r <= 0)
        {
            m = i;
            cout << m;
            return 0;
        }
    }
    m = r + i + 1;
    cout << m << endl;
    return 0;
}