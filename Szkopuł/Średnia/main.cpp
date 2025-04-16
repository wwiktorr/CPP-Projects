#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n, l, j, s = 0, x = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> l >> j;
    l--;
    j--;
    for (int i = l; i <= j; i++)
    {
        s += a[i];
        x++;
    }
    s = floor(s / x);
    cout << s;

    return 0;
}