#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n, m;
    cin >> n >> m;
    float suma = 0;
    float ceny[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ceny[i];
    }
    for (int j = 0; j < m; j++)
    {
        int numer;
        float ilosc;
        cin >> numer >> ilosc;
        suma += (ceny[numer - 1] * ilosc);
    }
    printf("%.0f", floor(suma));

    return 0;
}