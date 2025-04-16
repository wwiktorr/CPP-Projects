#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int n;
    int suma = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        suma += v[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", suma);
        suma -= v[i];
    }

    return 0;
}