#include <iostream>
#include <vector>

using namespace std;

void sortowaniePrzezWybor(vector<int> &tab, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (tab[j] < tab[min])
                min = j;
        }
        swap(tab[i], tab[min]);
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
    sortowaniePrzezWybor(tab, n);
    printVector(tab);
    return 0;
}