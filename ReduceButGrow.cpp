#include <iostream>
#include <vector>
// given a non empty array of integers return the result of multiplying the values together in order
// inpu vector <int> nus = {1,2,3,4}  output = 1*2*3*4----> 24
class Solution
{
public:
    int Grow(std::vector<int> nums)
    {
        int result = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            result *= nums[i];
        }
        return result;
    }
};

class Solution2
{
public:
    int Grow(std::vector<int> nums)
    {
        int result = 1;

        for (int n : nums)
        {
            result *= n;
        }
        return result;
    }
};

int main()
{
    Solution s;
    Solution2 s2;
    std::vector<int> nums = {1, 2, 3, 4};
    std::cout << "Grow : " << s.Grow(nums) << std::endl;
    std::cout << "Grow : " << s2.Grow(nums) << std::endl;
    std::cin.get();
}