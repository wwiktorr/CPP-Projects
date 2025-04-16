#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int d, n, a, s;
    cin >> d;
    int w[d];
    for (int i = 0; i < d; i++)
    {
        s = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            s += a;
        }
        w[i] = s;
    }
    for (int k = 0; k < d; k++)
    {
        cout << w[k] << "\n";
    }

    return 0;
}