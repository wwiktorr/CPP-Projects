#include <iostream>
#include <cmath>

using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return floor(log2(n)) == ceil(log2(n)) ? true : false;
}

int main()
{
    cout << isPowerOfTwo(5);
}
