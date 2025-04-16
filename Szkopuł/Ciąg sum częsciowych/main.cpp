#include <iostream>

const int N = 50001;
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    cin >> n;
    int a[N], b[N];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}