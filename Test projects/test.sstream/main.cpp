#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string inString;
    istringstream iss;
    long long int liczby, odwr, temp;
    char znaki;

    while (true)
    {
        printf("Wpisz liczbe: \n");
        getline(cin, inString);
        iss.str(inString);
        iss.clear();
        if (((iss >> liczby) && !(iss >> znaki)) && (liczby > 0))
        {
            printf("Poprawna liczba.\n");
            break;
        }
        else
        {
            printf("Niepoprawna liczba.\n");
        }
    }
    temp = liczby;
    odwr = 0;
    while (liczby > 0)
    {
        odwr = (odwr * 10) + (liczby % 10);
        liczby /= 10;
    }
    printf("Normalna liczba = %lld\n", temp);
    printf("Odwrocona liczba = %lld\n", odwr);

    return 0;
}