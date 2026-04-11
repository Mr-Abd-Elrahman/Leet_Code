#include <iostream>
#include <cmath>

// nathan loves cycling and he knows that he should keep hydrated so he drinks 0.5 litres per hour of cycling
// you are given a number of hours and you should calculate number of liters of theose hours

class Solution
{
public:
    int litres(double time)
    {
        return time / 2;
    }
};

class Solution2
{
public:
    float MyFloor(float Number)
    {
        if (Number < 0)
        {
            return (int)Number - 1;
        }
        else if (Number == 0)
        {
            return 0;
        }
        else
        {
            return int(Number);
        }
    }

    float NumberOfLitres(float hours)
    {
        return floor(hours / 2);
    }
};

int main()
{
    Solution2 S1;
    Solution S;
    float hours = 11.8;

    std::cout << "Number of litres : " << S.litres(hours) << std::endl;
    std::cout << "Number of litres : " << S1.NumberOfLitres(hours) << std::endl;

    std::cout << S1.MyFloor(-11.8) << std::endl;

    std::cin.get();
}