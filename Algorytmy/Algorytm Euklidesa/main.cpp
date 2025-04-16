#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

void optymalny(long long int a, long long int b)
{
    while (a != 0 && b != 0)
        if (a > b)
            a = a % b;
        else
            b = b % a;
    cout << "Optymalny algorytm: " << (a > b ? a : b) << endl;
}
void nieoptymalny(long long int a, long long int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << "Nieoptymalny algorytm: " << a << endl;
}
int main()
{
    long long int a, b;
    cin >> a >> b;

    const auto startOpt = high_resolution_clock::now();
    optymalny(a, b);

    const auto koniecOpt = high_resolution_clock::now();
    const std::chrono::duration<double> czasOpt = koniecOpt - startOpt;

    cout << "Czas optymalnego algorytmu: " << duration_cast<milliseconds>(czasOpt).count() << " milisekundy" << endl;

    const auto startNieOpt = high_resolution_clock::now();
    nieoptymalny(a, b);

    const auto koniecNieOpt = high_resolution_clock::now();
    const std::chrono::duration<double> czasNieOpt = koniecNieOpt - startNieOpt;

    cout << "Czas nieoptymalnego algorytmu: " << duration_cast<milliseconds>(czasNieOpt).count() << " milisekundy" << endl;
    const std::chrono::duration<double> roznicaCzasu = czasNieOpt - czasOpt;
    cout << "Roznica czasu: " << duration_cast<milliseconds>(roznicaCzasu).count() << " milisekundy" << endl;
    return 0;
}