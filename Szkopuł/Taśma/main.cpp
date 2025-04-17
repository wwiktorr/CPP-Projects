#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    long long suma = 0, min = INT64_MAX, roznica;
    long long R, L = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        suma += a[i];
    }

    if (n == 1)
    {
        cout << a[0];
        return 0;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        L += a[i];
        R = suma - L;
        roznica = abs(L - R);
        if (roznica < min)
            min = roznica;
    }

    cout << min << endl;
    return 0;
}