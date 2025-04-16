#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n, j = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            j++;
        }
    }
    //! Rozmiar tablicy = n
    //! Liczba zer = j
    //! Liczba jedynek = n - j
    if (n - j >= j)
    {
        cout << j;
        // * 1 0 1 1 0 1 = 2
    }
    //? Więcej jedynek
    else
    {
        cout << n - j;
        // * 1 0 0 0 0 0 = 6 - 5 = 1
    }
    //? Więcej zer
    return 0;
}