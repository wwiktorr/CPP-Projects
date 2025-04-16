#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << j % 2;
            }
        }
        else
        {
            for (int j = 1; j < n + 1; j++)
            {
                cout << j % 2;
            }
        }

        cout << endl;
    }
}