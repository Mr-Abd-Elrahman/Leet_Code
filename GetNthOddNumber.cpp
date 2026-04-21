#include <iostream>

class Solution
{
public:
    int NthOdd(int num)
    {
        return num * 2 - 1;
    }
};
class Solution2
{
public:
    int NthEven(int num)
    {
        int result = 0;
        for (int i = 1; i < num; i++)
        {
            result += 2;
        }
        return result;
    }
    int NthOdd(int num)
    {
        int result = 1;

        for (int i = 1; i < num; i++)
        {
            result += 2;
        }
        return result;
    }
};
int main()
{
    Solution2 S1;
    int num = 3;

    std::cout << S1.NthEven(num) << std::endl; // output 4
    std::cout << S1.NthOdd(num) << std::endl;  // output 5

    std::cin.get();
}