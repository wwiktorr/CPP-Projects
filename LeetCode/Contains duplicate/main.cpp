#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> duplicates;
    for (int num : nums)
    {
        if (duplicates.count(num))
            return true;
        duplicates.insert(num);
    }
    return false;
}