#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> valueMap;
    int diff;
    for (int i = 0; i < nums.size(); i++)
    {
        diff = target - nums[i];
        if (valueMap.count(diff))
            return {valueMap[diff], i};
        valueMap[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 4, 5, 3, 6, 9, 12};
    int target = 6;
    vector<int> result = twoSum(nums, target);

    if (!result.empty())
        printf("[%d, %d]", result[0], result[1]);
    else
        puts("No results.");
}