#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> a(n);
    char z;
    int tab[52] = {0};
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] >= 97 && a[i][j] <= 122)
            {
                tab[a[i][j] - 97]++;
            }
            else if (a[i][j] >= 65 && a[i][j] <= 90)
            {
                tab[a[i][j] - 65 + 26]++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (tab[i] > 0)
            printf("%c %d\n", i + 97, tab[i]);
    }

    for (int i = 26; i < 52; i++)
    {
        if (tab[i] > 0)
            printf("%c %d\n", i - 26 + 65, tab[i]);
    }

    return 0;
}