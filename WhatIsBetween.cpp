#include <iostream>
#include <vector>

class Solution
{

public:
    std::vector<int> between(int start, int end)
    {
        std::vector<int> nums;

        for (int i = start; i <= end; i++)
        {
            nums.push_back(i);
        }
        return nums;
    }
};

int main()
{
    Solution s1;

    int a = 1;
    int b = 4;

    std::vector<int> between = s1.between(a, b);

    for (int i = 0; i < between.size(); i++)
    {
        std::cout << between[i] << " ";
    }
    std::cin.get();
}