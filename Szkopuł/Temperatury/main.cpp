#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n;
    cin >> n;
    int t[n], x, l = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == x)
        {
            l++;
        }
    }
    printf("%d ", l);
    for (int i = 0; i < n; i++)
    {
        if (t[i] == x)
        {
            printf("%d ", i + 1);
        }
    }

    return 0;
}