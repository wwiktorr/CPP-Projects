#include <iostream>

using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, a, j = 1, w = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a == j ? j++ : w++;
        //* if a == j j++
        //* else w++;
    }
    printf("%d", w);

    return 0;
}