#include <iostream>
#include <vector>

using namespace std;

void sitoEratostenesa(int n)
{
    vector<bool> a(n + 1, true);

    a[0] = a[1] = false;

    for (int j = 2; j * j <= n; j++)
    {
        if (a[j])
        {
            for (int k = j * j; k <= n; k += j)
            {
                a[k] = false;
            }
        }
    }
    cout << "Lista liczb pierwszych od 1 do " << n << ": ";
    for (int m = 2; m <= n; m++)
    {
        if (a[m])
            printf("%d ", m);
    }
}

int main()
{
    int n;
    cin >> n;
    sitoEratostenesa(n);
}