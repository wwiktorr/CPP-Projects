#include <iostream>

using namespace std;

int rozmiar;

bool poprawnaLiczba(string foo)
{
    rozmiar = 0;
    for (char c : foo)
    {
        if (!isdigit(c))
            return false;
        rozmiar++;
    }
    return true;
}

bool wszystkieCyfrySaZerem(string foo)
{
    for (char c : foo)
    {
        if (c != '0')
            return false;
    }
    return true;
}
int main()
{
    string foo;
    cout << "Program odwraca wpisana przez uzytkownika liczbe i wypisuje ja. " << endl;
    cout << "Wpisz liczbe: \n";
    getline(cin, foo);

    while (poprawnaLiczba(foo) == false || foo == "")
    {
        cout << "Niepoprawny input, wpisz liczbe ponownie: \n";
        getline(cin, foo);
    }

    string odwr = "";
    bool zera = true;

    if (wszystkieCyfrySaZerem(foo))
        odwr = foo;
    else
    {
        for (int i = rozmiar - 1; i >= 0; i--)
        {
            if (foo[i] == '0' && zera)
            {
                continue;
            }
            else
            {
                zera = false;
            }
            odwr += foo[i];
        }
    }

    cout << "Nieodwrocona liczba = " << foo << endl;
    cout << "Odwrocona liczba = " << odwr << endl;

    return 0;
}