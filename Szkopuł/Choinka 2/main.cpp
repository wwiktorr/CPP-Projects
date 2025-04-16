#include <iostream>

using namespace std;
int main()
{
    unsigned int n, j;
    char a = '*';
    cin >> n;
    j = n;
    for (int i = 1; i < 2 * n + 1; i += 2)
    {
        cout << string(j, ' ') << string(i, a) << endl;
        j--;
    }
    j = n;
    for (int i = 1; i < 2 * n + 2; i += 2)
    {
        cout << string(j, ' ') << string(i, a) << endl;
        j--;
    }

    return 0;
}