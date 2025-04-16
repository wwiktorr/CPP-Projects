#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n;
    int j, l = 0, min = INT32_MAX;
    cin >> n;
    int w[n];
    // int w2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (w[i] < min)
            min = w[i];
        j = w[i] - min;

        if (j > l)
            l = j;
    }
    printf("%d\n", l);
    return 0;
}