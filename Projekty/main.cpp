#include <iostream>
#include <string>

using namespace std;

string przecinkiWLiczbie(long long int liczba)
{
    string s = std::to_string(liczba);

    int n = s.length() - 3;
    int end = liczba <= 0; //? 0 = liczby pozytywne 
                           //! 1 = liczby negatywne
    while (n > end)
    {
        s.insert(n, ",");
        n -= 3;
    }
    return s;
}
int main()
{
    long long int liczba;
    cin >> liczba;

    string liczbaZPrzecinkami = przecinkiWLiczbie(liczba);
    cout << liczbaZPrzecinkami;

    return 0;
}