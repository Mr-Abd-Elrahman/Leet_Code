#include <iostream>

class Solution
{
public:
    char GetCharcter(short num)
    {
        return char(num);
    }
};

int main()
{
    Solution S1;

    int num = 65;

    std::cout << "Character is : " << S1.GetCharcter(num) << std::endl; // output A
    std::cin.get();
}
