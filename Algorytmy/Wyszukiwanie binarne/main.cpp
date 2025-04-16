#include <iostream>
#include <vector>

using namespace std;

int wyszukiwanieBinarne(vector<int> tab, int x)
{
    int R, L, MID;
    L = 0;
    R = tab.size() - 1;
    while (L <= R)
    {
        MID = L + (R - L) / 2;
        if (tab[MID] == x)
            return MID;
        if (tab[MID] < x)
            L = MID + 1;
        else
            R = MID - 1;
    }
    return -1;
}
int main()
{
    int poszuk;

    vector<int> tab = {1, 5, 8, 9, 12};
    printf("Wpisz poszukiwany element: ");
    cin >> poszuk;
    int wynik = wyszukiwanieBinarne(tab, poszuk);
    printf((wynik == -1) ? "Element nie zostal znaleziony w tablicy." : "Poszukiwany element znajduje sie na tab[%d] i ma wartosc %d", wynik, poszuk);
    return 0;
}