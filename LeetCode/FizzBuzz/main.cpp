#include <iostream>
#include <vector>

using namespace std;
vector<string> fizzBuzz(int n)
{
    string result;
    vector<string> vec;
    for (int i = 1; i <= n; i++)
    {
        result = "";
        if (i % 3 == 0)
            result += "Fizz";
        if (i % 5 == 0)
            result += "Buzz";

        if (result == "")
            vec.push_back(to_string(i));
        else
            vec.push_back(result);
    }
    return vec;
}

int main()
{
    vector<string> result = fizzBuzz(100);
    for (string s : result)
    {
        cout << s << " ";
    }
}
