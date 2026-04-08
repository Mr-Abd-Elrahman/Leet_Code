#include <iostream>
#include <cmath>

class Solution
{
public:
    bool IsDivisible(int n, int x, int y)
    {
        return n % x == 0 && n % y == 0;
    }
};

int main()
{
    Solution s;
    int n = 3;
    int x = 1;
    int y = 4;
    if (s.IsDivisible(n, x, y))
    {
        std::cout << "True";
    }
    else
    {
        std::cout << "False";
    }

    std::cin.get();
}