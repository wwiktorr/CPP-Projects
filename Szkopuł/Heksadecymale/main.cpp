#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main()
{
    long long int n;
    string hex = "";
    char temp;
    int r;
    cin >> n;
    bool check = false;
    while (n != 0 && check != true)
    {
        r = 0;
        r = n % 16;
        n /= 16;
        switch (r)
        {
        case 10:
            temp = 'A';
            check = true;
            break;
        case 11:
            temp = 'B';
            check = true;
            break;
        case 12:
            temp = 'C';
            check = true;
            break;
        case 13:
            temp = 'D';
            check = true;
            break;
        case 14:
            temp = 'E';
            check = true;
            break;
        case 15:
            temp = 'F';
            check = true;
            break;
        default:
            temp = r + 48;
            break;
        }
        hex = temp + hex;
    }
    // * Sprawdza, czy znajduje się litera w liczbie.
    if (check)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
    return 0;
}