#include <iostream>
#include <vector>

using namespace std;

void sortowaniePrzezWstawianie(vector<int> &tab, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int k = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > k)
        {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = k;
    }
}
void printVector(vector<int> tab)
{
    for (int num : tab)
    {
        printf("%d ", num);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> tab(n);
    for (int i = 0; i < n; i++)
    {
        cin >> tab[i];
    }

    sortowaniePrzezWstawianie(tab, n);
    printVector(tab);
    return 0;
}