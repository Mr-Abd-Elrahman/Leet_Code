#include <iostream>

// class Solution
// {

// public:
//     bool LoveFunction(int f1, int f2)
//     {
//         return f1 % 2 == 0 && f2 % 2 != 0 ||f2 % 2 != 0 && f1 % 2 == 0;
//     }
// };

// Osam Elzero solution
class Solution
{
public:
    bool LoveFunction(int f1, int f2)
    {
        return f1 % 2 != f2 % 2;
    }
};

int main()
{
    Solution S1;
    int f1 = 1;
    int f2 = 0;

    std::cout << S1.LoveFunction(f1, f2) << std::endl;

    std::cin.get();
}