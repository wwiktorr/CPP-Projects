#include <iostream>

using namespace std;

int main()
{
    int i = 4;
    char a[] = "Siema";
    cout << *(i + a) << endl;
    cout << a[i - 1] << endl;
    cout << a[i] - 1 << endl;
    cout << (i - 1)[a] << endl;
    cout << i - 1 [a] << endl;
}