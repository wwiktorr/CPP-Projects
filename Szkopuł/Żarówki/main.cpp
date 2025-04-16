#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n, k;
    cin >> n >> k;
    int zarowki[k] = {0};
    int zapalone = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> zarowki[i];
    }
    int wyst[n] = {0};
    for (int i = 0; i < k; i++)
    {
        wyst[zarowki[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (wyst[i] % 2 != 0)
            zapalone++;
    }
    printf("%d", zapalone);

    return 0;
}