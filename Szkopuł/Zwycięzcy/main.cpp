#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, max = INT32_MIN;
    cin >> n;
    int zaw[n];
    for (int i = 0; i < n; i++)
    {
        cin >> zaw[i];
        if (zaw[i] > max)
            max = zaw[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (zaw[i] == max)
        {
            printf("%c", i + 65);
        }
    }

    return 0;
}