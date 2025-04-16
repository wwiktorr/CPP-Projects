#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n;
    cin >> n;
    int a[n], p1, k1, w1, p2, k2, w2, j, l = 0;
    p1 = k1 = w1 = p2 = k2 = w2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p1 = a[0];
    j = n - 1;
    // obliczanie k1
    while (j > 0)
    {
        if (a[j] != p1)
        {
            k1 = j;
            break;
        }
        j--;
    }
    // obliczanie p2
    while (l < n)
    {
        if (a[l] != p1)
        {
            p2 = l;
            break;
        }
        l++;
    }
    k2 = n - 1;
    // cout << k1 << endl;
    // cout << p1 << endl;
    // cout << k2 << endl;
    // cout << p2 << endl;
    w1 = k1;
    w2 = k2 - p2;
    // cout << w1 << endl;
    // cout << w2 << endl;
    if (w1 >= w2)
    {
        cout << w1 << endl;
    }
    else
    {
        cout << w2 << endl;
    }
}