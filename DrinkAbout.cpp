#include <iostream>

class Solution
{

public:
    std::string Poeple_With_Age_Drink(short age)
    {
        if (age < 14)
        {
            return "Kids Drink Toddy";
        }
        else if (age < 18)
        {
            return "Teens Drink Coke";
        }
        else if (age < 21)
        {
            return "Young Adults Drink beerel";
        }
        else
        {
            return "Adults Drink Whisky";
        }
    }
};

int main()
{
    Solution S1;

    short age = 13;

    std::cout << S1.Poeple_With_Age_Drink(age) << std::endl;

    std::cin.get();
}