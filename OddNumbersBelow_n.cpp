#include <iostream>

class Solution
{
public:
    int OddNumbersBelow_n(int n)
    {
        int counter = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 != 0)
            {
                counter++;
            }
        }
        return counter;
    }
};
class Solution2
{
public:
    int OddNumbersBelow_n(int n)
    {

        return n / 2;
    }
};
int main()
{
    int n = 15;
    Solution2 S1;

    std::cout << "Number of Odd Numbers: " << S1.OddNumbersBelow_n(n) << std::endl;

    std::cin.get();
}