#include <iostream>

using namespace std;

long long int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    printf((fib(n) > 0) ? "fib(%d) = %lld" : "Musisz wpisac liczbe dodatnia.", n, fib(n));
}