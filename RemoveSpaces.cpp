#include <iostream>

class Solution
{
public:
    std::string RemoveSpacesFromString(std::string str)
    {
        std::string clear = "";

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != ' ')
            {
                clear += str[i];
            }
        }
        return clear;
    }
};

int main()
{
    Solution S1;
    std::string name = "Y    a    s    s   i   n";

    std::cout << S1.RemoveSpacesFromString(name) << std::endl;

    std::cin.get();
}