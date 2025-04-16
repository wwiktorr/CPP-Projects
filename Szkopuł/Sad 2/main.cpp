#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int ile, d_st, d_k, pyt;
    long long int suma;
    cin >> ile;
    long long int wisnie[ile], sumy_czesc[ile + 1] = {0};

    for (int i = 0; i < ile; i++)
    {
        cin >> wisnie[i];
    }
    cin >> pyt;
    for (int i = 0; i < ile; i++)
    {
        sumy_czesc[i + 1] = sumy_czesc[i] + wisnie[i];
    }
    while (pyt > 0)
    {
        cin >> d_st >> d_k;
        suma = sumy_czesc[d_k] - sumy_czesc[d_st - 1];
        cout << suma << endl;
        pyt--;
    }

    return 0;
}