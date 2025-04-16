#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    int size = nums.size();
    vector<int> result(size);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        result[i] = nums[i] + sum;
        sum += nums[i];
    }
    return result;
}
int main()
{
    vector<int> example = {1, 2, 3, 4, 5, 6};
    // cout << example.size();
    vector<int> result = runningSum(example);
    for (int i : result)
    {
        cout << i << " ";
    }
}