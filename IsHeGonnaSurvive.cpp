#include <iostream>

class Solution
{

public:
    bool hero(int bullets, int Dragons)
    {
        return bullets >= Dragons * 2;
    }
};

class Solution2
{

public:
    bool hero(int bullets, int Dragons)
    {
        return bullets / 2 >= Dragons;
    }
};

int main()
{
    Solution2 S1;

    int bullets = 10;

    int Dragons = 3;

    if (S1.hero(bullets, Dragons))
    {
        std::cout << "Yes,he will survive";
    }
    else
    {
        std::cout << "No,he will die";
    }
    std::cin.get();
}