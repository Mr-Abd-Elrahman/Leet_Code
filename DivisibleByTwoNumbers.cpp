#include <iostream>
#include <cmath>

class Solution
{
private:
    bool IsDivisible(int n, int x, int y)
    {
        return n % x == 0 && n % y == 0;
    }

public:
    void PrintIsDivisibleResult(int n, int x, int y)
    {
        if (IsDivisible(n, x, y))
        {
            std::cout << "true";
        }
        else
        {
            std::cout << "false";
        }
    }
};

int main()
{
    Solution s;
    int n = 3;
    int x = 1;
    int y = 4;

    s.PrintIsDivisibleResult(n, x, y);

    std::cin.get();
}