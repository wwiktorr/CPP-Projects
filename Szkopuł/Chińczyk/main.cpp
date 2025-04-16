#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, s = 0;
    short int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 6)
        {
            s++;
        }
    }
    cout << s << endl;

    return 0;
}