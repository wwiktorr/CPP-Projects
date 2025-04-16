#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> V;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        V.push_back(a);
    }
    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << " ";
    }
    V.clear();
}