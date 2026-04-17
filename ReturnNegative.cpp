#include <iostream>

class Solution
{
public:
    int MakeNegative(int num)
    {
        // return num > 0 ? num * -1 : num;
        return num > 0 ? -num : num;
    }
};
class Solution2
{
public:
    int MakeNegative(int num)
    {
        if (num > 0)
        {
            return num * -1;
        }
        else
        {
            return num;
        }
    }
};
class Solution3
{
public:
    int MakeNegative(int num)
    {
        return -abs(num); // absolute value
    }
};
int main()
{
    Solution S1;
    Solution2 S2;
    int num = 4;

    std::cout << "Number: " << S1.MakeNegative(num) << std::endl;
    std::cout << "Number: " << S2.MakeNegative(num) << std::endl;
    std::cin.get();
    return 0;
}
