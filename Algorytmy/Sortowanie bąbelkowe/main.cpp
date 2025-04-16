#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &tab, int n)
{
    bool swapped;
    for (int i = 0; i < n; i++)
    {
        swapped = false;
        for (int j = i + 1; j < n; j++)
        {
            if (tab[j] < tab[i])
                swap(tab[j], tab[i]);
            swapped = true;
        }
        if (!swapped)
            break;
    }
}
void printVector(vector<int> tab)
{
    for (int num : tab)
        printf("%d ", num);
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
    bubbleSort(tab, n);
    printVector(tab);

    return 0;
}