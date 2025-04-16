#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    char temp;
    int male, duze, poz, maxLeksykDuza;
    male = duze = poz = maxLeksykDuza = 0;

    for (int i = 0; i < w; i++)
    {
        cin >> temp;
        if (temp >= 97 && temp <= 122)
        {
            male++;
        }
        else if (temp >= 65 && temp <= 90)
        {
            if (temp > maxLeksykDuza)
                maxLeksykDuza = temp;
            duze++;
        }
        else
        {
            poz++;
        }
    }
    printf("Liczba malych liter wynosi %d\n", male);
    printf("Liczba duzych liter wynosi %d\n", duze);
    printf("Liczba pozostalych znakow wynosi %d\n", poz);

    if (maxLeksykDuza != 0)
    {
        printf("Najwieksza leksykograficznie duza litera to %c\n", maxLeksykDuza);
        printf("Kod najwiekszej leksykograficznie duzej litery to %d\n", maxLeksykDuza);
    }
}