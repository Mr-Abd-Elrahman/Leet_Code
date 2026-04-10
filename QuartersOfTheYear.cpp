#include <iostream>

// you are given an integer number represents a month and you should find in which quarter that month is

class Solution
{

public:
    std::string Quarter_Of(int month)
    {
        if (month < 4)
        {
            return "First Quarter";
        }
        else if (month < 7)
        {
            return "Second Quarter";
        }
        else if (month < 10)
        {
            return "Third Quarter";
        }
        else if (month <= 12)
        {
            return "Fourth Quarter";
        }
        else
        {
            return "";
        }
    }
};

int main()
{
    Solution Solution1;

    int month = -2;
    std::cout << Solution1.Quarter_Of(month) << std::endl;

    std::cin.get();
}