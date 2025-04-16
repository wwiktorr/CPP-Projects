#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                c++;
                printf("%d ", c);
            }
        }
        else
        {
            for (int k = 0; k < n; k++)
            {
                printf("%d ", c);
                c--;
            }
        }
        printf("\n");
        c += n;
    }

    return 0;
}