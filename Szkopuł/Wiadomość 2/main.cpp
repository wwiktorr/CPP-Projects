#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    char temp;
    int najmniejszaLeksykograficznieMala = 123, najwiekszaLeksykograficznieMala = 96;
    int duze = 0;
    bool male = 0;

    for (int i = 0; i < w; i++)
    {
        cin >> temp;
        if ((temp >= 97 && temp <= 122))
        {
            male = true;
            if (temp < najmniejszaLeksykograficznieMala)
                najmniejszaLeksykograficznieMala = temp;
            if (temp > najwiekszaLeksykograficznieMala)
                najwiekszaLeksykograficznieMala = temp;
        }
        else if ((temp >= 'F' && temp <= 'T'))
        {
            duze++;
        }
    }

    if (male != false)
    {
        printf("Przedzial w ktorym mieszcza sie male litery ma dlugosc %d\n", najwiekszaLeksykograficznieMala - najmniejszaLeksykograficznieMala + 1);
        printf("Najmniejsza leksykograficznie mala litera to %c\n", najmniejszaLeksykograficznieMala);
        printf("Kod najmniejszej leksykograficznie malej litery %d\n", najmniejszaLeksykograficznieMala);
    }
    else
    {
        printf("Brak malych liter\n");
    }
    if (duze != 0)
    {
        printf("Liczba duzych liter od F do T wynosi %d\n", duze);
    }
    else
    {
        printf("Brak duzych liter w przedziale F do T\n");
    }
    return 0;
}