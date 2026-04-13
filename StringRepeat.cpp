#include <iostream>

class Solution
{
public:
    std::string RepeatString(std::string Str, int n)
    {
        std::string Repeat = "";

        for (int i = 0; i < n; i++)
        {
            Repeat += Str;
        }
        return Repeat;
    }
};
class Solution2
{
public:
    std::string RepeatString(std::string Str, int n)
    {
        std::string Repeat = "";

        while (n--)
        {
            Repeat += Str;
        }
        return Repeat;
    }
};
int main()
{
    Solution S;
    Solution2 S2;
    int n = 3;
    std::string name = "Yassin";

    std::cout << S.RepeatString(name, n) << std::endl;
    std::cout << S2.RepeatString(name, n) << std::endl;

    std::cin.get();
}