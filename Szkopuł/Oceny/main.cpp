#include <iostream>

using namespace std;
int main()
{
    unsigned int n, a;
    cin >> n;
    int o[7] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        o[a]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", o[i]);
    }

    return 0;
}