#include <iostream>
#include <vector>

class Solution
{
public:
    int SquareAndSum(const std::vector<int> &numbers)
    {
        int num = 1;
        int sum = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
            num = numbers[i] * numbers[i];
            sum += num;
        }
        return sum;
    }
};
class Solution2
{
public:
    int SquareAndSum(const std::vector<int> &numbers)
    {

        int sum = 0;
        for (int i = 0; i < numbers.size(); i++)
        {

            sum += numbers[i] * numbers[i];
        }
        return sum;
    }
};

class Solution3
{
public:
    int SquareAndSum(const std::vector<int> &numbers)
    {

        int sum = 0;
        for (int X : numbers)
        {

            sum += X * X;
        }
        return sum;
    }
};

int main()
{
    Solution S1;
    std::vector<int> numbers = {1, 2, 2, 3};
    std::cout << "Result: " << S1.SquareAndSum(numbers) << std::endl;

    Solution2 S2;
    std::cout << "Result: " << S2.SquareAndSum(numbers) << std::endl;

    Solution3 S3;
    std::cout << "Result: " << S3.SquareAndSum(numbers) << std::endl;

    std::cin.get();
    return 0;
}