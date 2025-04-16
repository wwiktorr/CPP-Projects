#include <iostream>

using namespace std;

int main()
{
    string a;
    int s, m, d, z, max = 65;
    s = m = d = z = 0;
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            m++;
        else if (a[i] >= 65 && a[i] <= 90)
            d++;
        else
            z++;
        if (a[i] != ' ')
            s++;
    }

    cout << s << endl;
    cout << m << endl;
    cout << d << endl;
    cout << z << endl;
    return 0;
}