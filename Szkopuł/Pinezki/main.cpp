#include <iostream>

using namespace std;
int main()
{
    unsigned int n = 0, j = 0, max = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            j++;
            if (j > max)
                max = j;
        }
        else
        {
            j = 0;
        }
    }
    cout << max;

    return 0;
}