#include <iostream>

/*Mulitply given number by eight if it is an even
number and by nine otherwise*/

class Solution
{
public:
    int SimpleMultiplication(int a)
    {

        return a % 2 == 0 ? a * 8 : a * 9;
    }
};

int main()
{

    int a = 4;

    Solution S;
    std::cout << S.SimpleMultiplication(a);
    std::cin.get();

    return 0;
}