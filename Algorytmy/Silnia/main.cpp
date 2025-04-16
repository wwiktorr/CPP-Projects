#include <iostream>

using namespace std;

long long int silnia(int n)
{
    // long long int temp = 1;
    // for (int i = 2; i <= n; i++)
    //     temp *= i;
    // return temp;
    //* LUB
    if (n == 0 || n == 1)
        return 1;
    return n * silnia(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << silnia(n);
    ;
}